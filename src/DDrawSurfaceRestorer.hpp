namespace GOTHIC_NAMESPACE
{
	HRESULT __stdcall zCRndD3D_Vid_Blit_EndScene()
	{
		zCRnd_D3D* renderer = static_cast<zCRnd_D3D*>(zrenderer);
		HRESULT result = renderer->xd3d_pd3dDevice7->EndScene();

		renderer->xd3d_inScene = FALSE;

		if (result == DDERR_SURFACELOST && renderer->xd3d_pdd7->TestCooperativeLevel() == DD_OK)
		{
			renderer->xd3d_deviceChange = TRUE;

			renderer->XD3D_ClearDevice();
			renderer->XD3D_InitPort(renderer->xd3d_scrWidth, renderer->xd3d_scrHeight, renderer->xd3d_scrBpp, renderer->xd3d_tryDevnum, 0);

			renderer->xd3d_pdd7->RestoreAllSurfaces();

			renderer->SetSurfaceLost(FALSE);
		}

		return result;
	}
}
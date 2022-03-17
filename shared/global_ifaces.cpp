#include <ISvenModAPI.h>

ISvenModAPI *g_pSvenModAPI = NULL;
ICommandLine *g_pCommandLine = NULL;
IFileSystem *g_pFileSystem = NULL;
IRegistry *g_pRegistry = NULL;
IMemoryUtils *g_pMemoryUtils = NULL;
IDetoursAPI *g_pDetoursAPI = NULL;
ILoggingSystem *g_pLoggingSystem = NULL;
IConfigManager *g_pConfigManager = NULL;
IPluginHelpers *g_pPluginHelpers = NULL;
modules_s *g_pModules = NULL;
ICvar *g_pCVar = NULL;
IHooks *g_pHooks = NULL;
IPlayerUtils *g_pPlayerUtils = NULL;
IInventory *g_pInventory = NULL;
IVGUI *g_pVGUI = NULL;
IVGameUI *g_pVGameUI = NULL;
cl_clientfuncs_t *g_pClientFuncs = NULL;
cl_enginefuncs_t *g_pEngineFuncs = NULL;
IEngineClient *g_pEngineClient = NULL;
engine_studio_api_t *g_pEngineStudio = NULL;
r_studio_interface_t *g_pStudioAPI = NULL;
CStudioModelRenderer *g_pStudioRenderer = NULL;
triangleapi_t *g_pTriangleAPI = NULL;
efx_api_t *g_pEffectsAPI = NULL;
event_api_t *g_pEventAPI = NULL;
demo_api_t *g_pDemoAPI = NULL;
net_api_t *g_pNetAPI = NULL;
IVoiceTweak *g_pVoiceTweak = NULL;
playermove_t *g_pPlayerMove = NULL;
IVideoMode *g_pVideoMode = NULL;

void BindApiToGlobals(ISvenModAPI *pSvenModAPI)
{
	g_pSvenModAPI = pSvenModAPI;
	g_pCommandLine = pSvenModAPI->CommandLine();
	g_pFileSystem = pSvenModAPI->FileSystem();
	g_pRegistry = pSvenModAPI->Registry();
	g_pMemoryUtils = pSvenModAPI->MemoryUtils();
	g_pDetoursAPI = pSvenModAPI->DetoursAPI();
	g_pLoggingSystem = pSvenModAPI->LoggingSystem();
	g_pConfigManager = pSvenModAPI->ConfigManager();
	g_pPluginHelpers = pSvenModAPI->PluginHelpers();
	g_pModules = pSvenModAPI->Modules();
	g_pCVar = pSvenModAPI->CVar();
	g_pHooks = pSvenModAPI->Hooks();
	g_pPlayerUtils = pSvenModAPI->PlayerUtils();
	g_pInventory = pSvenModAPI->Inventory();
	g_pVGUI = pSvenModAPI->VGUI();
	g_pVGameUI = pSvenModAPI->VGameUI();
	g_pClientFuncs = pSvenModAPI->ClientFuncs();
	g_pEngineFuncs = pSvenModAPI->EngineFuncs();
	g_pEngineClient = pSvenModAPI->EngineClient();
	g_pEngineStudio = pSvenModAPI->EngineStudio();
	g_pStudioAPI = pSvenModAPI->StudioAPI();
	g_pStudioRenderer = pSvenModAPI->StudioRenderer();
	g_pTriangleAPI = pSvenModAPI->TriangleAPI();
	g_pEffectsAPI = pSvenModAPI->EffectsAPI();
	g_pEventAPI = pSvenModAPI->EventAPI();
	g_pDemoAPI = pSvenModAPI->DemoAPI();
	g_pNetAPI = pSvenModAPI->NetAPI();
	g_pVoiceTweak = pSvenModAPI->VoiceTweak();
	g_pPlayerMove = pSvenModAPI->PlayerMove();
	g_pVideoMode = pSvenModAPI->VideoMode();
}
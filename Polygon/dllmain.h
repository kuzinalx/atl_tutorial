// dllmain.h : Declaration of module class.

class CPolygonModule : public ATL::CAtlDllModuleT< CPolygonModule >
{
public :
	DECLARE_LIBID(LIBID_PolygonLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_POLYGON, "{C2F44A95-5634-41CD-B270-8C18EF201534}")
};

extern class CPolygonModule _AtlModule;

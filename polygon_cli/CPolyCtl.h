// Machine generated IDispatch wrapper class(es) created with Add Class from Typelib Wizard

#import "D:\\projects\\vc2013\\atl_tutorial\\Debug\\Polygon.dll" no_namespace
// CPolyCtl wrapper class

class CPolyCtl : public COleDispatchDriver
{
public:
	CPolyCtl(){} // Calls COleDispatchDriver default constructor
	CPolyCtl(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CPolyCtl(const CPolyCtl& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// Attributes
public:

	// Operations
public:


	// IPolyCtl methods
public:
	void put_FillColor(unsigned long newValue)
	{
		static BYTE parms[] = VTS_UI4;
		InvokeHelper(DISPID_FILLCOLOR, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	unsigned long get_FillColor()
	{
		unsigned long result;
		InvokeHelper(DISPID_FILLCOLOR, DISPATCH_PROPERTYGET, VT_UI4, (void*)&result, NULL);
		return result;
	}
	short get_Sides()
	{
		short result;
		InvokeHelper(0x1, DISPATCH_PROPERTYGET, VT_I2, (void*)&result, NULL);
		return result;
	}
	void put_Sides(short newValue)
	{
		static BYTE parms[] = VTS_I2;
		InvokeHelper(0x1, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	void DrawPoly(wireHDC dc, _RECTL * rect)
	{
		static BYTE parms[] = VTS_UNKNOWN VTS_UNKNOWN;
		InvokeHelper(0x2, DISPATCH_METHOD, VT_EMPTY, NULL, parms, dc, rect);
	}
	void DrawPoly2(long dc, long * pr)
	{
		static BYTE parms[] = VTS_I4 VTS_PI4;
		InvokeHelper(0x3, DISPATCH_METHOD, VT_EMPTY, NULL, parms, dc, pr);
	}

	// IPolyCtl properties
public:

};

#include <sun/awt/X11/XUtilConstants.h>

#include <jcpp.h>

#undef XCNOENT
#undef XCNOMEM
#undef XCSUCCESS

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XUtilConstants_FieldInfo_[] = {
	{"NoValue", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XUtilConstants, NoValue)},
	{"XValue", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XUtilConstants, XValue)},
	{"YValue", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XUtilConstants, YValue)},
	{"WidthValue", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XUtilConstants, WidthValue)},
	{"HeightValue", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XUtilConstants, HeightValue)},
	{"AllValues", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XUtilConstants, AllValues)},
	{"XNegative", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XUtilConstants, XNegative)},
	{"YNegative", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XUtilConstants, YNegative)},
	{"USPosition", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XUtilConstants, USPosition)},
	{"USSize", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XUtilConstants, USSize)},
	{"PPosition", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XUtilConstants, PPosition)},
	{"PSize", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XUtilConstants, PSize)},
	{"PMinSize", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XUtilConstants, PMinSize)},
	{"PMaxSize", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XUtilConstants, PMaxSize)},
	{"PResizeInc", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XUtilConstants, PResizeInc)},
	{"PAspect", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XUtilConstants, PAspect)},
	{"PBaseSize", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XUtilConstants, PBaseSize)},
	{"PWinGravity", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XUtilConstants, PWinGravity)},
	{"PAllHints", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XUtilConstants, PAllHints)},
	{"InputHint", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XUtilConstants, InputHint)},
	{"StateHint", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XUtilConstants, StateHint)},
	{"IconPixmapHint", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XUtilConstants, IconPixmapHint)},
	{"IconWindowHint", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XUtilConstants, IconWindowHint)},
	{"IconPositionHint", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XUtilConstants, IconPositionHint)},
	{"IconMaskHint", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XUtilConstants, IconMaskHint)},
	{"WindowGroupHint", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XUtilConstants, WindowGroupHint)},
	{"AllHints", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XUtilConstants, AllHints)},
	{"XUrgencyHint", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XUtilConstants, XUrgencyHint)},
	{"WithdrawnState", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XUtilConstants, WithdrawnState)},
	{"NormalState", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XUtilConstants, NormalState)},
	{"IconicState", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XUtilConstants, IconicState)},
	{"DontCareState", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XUtilConstants, DontCareState)},
	{"ZoomState", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XUtilConstants, ZoomState)},
	{"InactiveState", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XUtilConstants, InactiveState)},
	{"XNoMemory", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XUtilConstants, XNoMemory)},
	{"XLocaleNotSupported", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XUtilConstants, XLocaleNotSupported)},
	{"XConverterNotFound", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XUtilConstants, XConverterNotFound)},
	{"RectangleOut", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XUtilConstants, RectangleOut)},
	{"RectangleIn", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XUtilConstants, RectangleIn)},
	{"RectanglePart", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XUtilConstants, RectanglePart)},
	{"VisualNoMask", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XUtilConstants, VisualNoMask)},
	{"VisualIDMask", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XUtilConstants, VisualIDMask)},
	{"VisualScreenMask", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XUtilConstants, VisualScreenMask)},
	{"VisualDepthMask", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XUtilConstants, VisualDepthMask)},
	{"VisualClassMask", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XUtilConstants, VisualClassMask)},
	{"VisualRedMaskMask", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XUtilConstants, VisualRedMaskMask)},
	{"VisualGreenMaskMask", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XUtilConstants, VisualGreenMaskMask)},
	{"VisualBlueMaskMask", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XUtilConstants, VisualBlueMaskMask)},
	{"VisualColormapSizeMask", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XUtilConstants, VisualColormapSizeMask)},
	{"VisualBitsPerRGBMask", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XUtilConstants, VisualBitsPerRGBMask)},
	{"VisualAllMask", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XUtilConstants, VisualAllMask)},
	{"BitmapSuccess", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XUtilConstants, BitmapSuccess)},
	{"BitmapOpenFailed", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XUtilConstants, BitmapOpenFailed)},
	{"BitmapFileInvalid", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XUtilConstants, BitmapFileInvalid)},
	{"BitmapNoMemory", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XUtilConstants, BitmapNoMemory)},
	{"XCSUCCESS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XUtilConstants, XCSUCCESS)},
	{"XCNOMEM", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XUtilConstants, XCNOMEM)},
	{"XCNOENT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XUtilConstants, XCNOENT)},
	{}
};

$MethodInfo _XUtilConstants_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(XUtilConstants::*)()>(&XUtilConstants::init$))},
	{}
};

$ClassInfo _XUtilConstants_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.awt.X11.XUtilConstants",
	"java.lang.Object",
	nullptr,
	_XUtilConstants_FieldInfo_,
	_XUtilConstants_MethodInfo_
};

$Object* allocate$XUtilConstants($Class* clazz) {
	return $of($alloc(XUtilConstants));
}

void XUtilConstants::init$() {
}

XUtilConstants::XUtilConstants() {
}

$Class* XUtilConstants::load$($String* name, bool initialize) {
	$loadClass(XUtilConstants, name, initialize, &_XUtilConstants_ClassInfo_, allocate$XUtilConstants);
	return class$;
}

$Class* XUtilConstants::class$ = nullptr;

		} // X11
	} // awt
} // sun
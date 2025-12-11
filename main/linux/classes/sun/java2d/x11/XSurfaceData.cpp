#include <sun/java2d/x11/XSurfaceData.h>

#include <java/awt/image/ColorModel.h>
#include <sun/awt/X11ComponentPeer.h>
#include <sun/awt/X11GraphicsConfig.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/loops/SurfaceType.h>
#include <sun/java2d/pipe/Region.h>
#include <jcpp.h>

using $ColorModel = ::java::awt::image::ColorModel;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $X11ComponentPeer = ::sun::awt::X11ComponentPeer;
using $X11GraphicsConfig = ::sun::awt::X11GraphicsConfig;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $SurfaceType = ::sun::java2d::loops::SurfaceType;
using $Region = ::sun::java2d::pipe::Region;

namespace sun {
	namespace java2d {
		namespace x11 {

$FieldInfo _XSurfaceData_FieldInfo_[] = {
	{"isX11SurfaceDataInitialized", "Z", nullptr, $STATIC, $staticField(XSurfaceData, isX11SurfaceDataInitialized$)},
	{}
};

$MethodInfo _XSurfaceData_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/loops/SurfaceType;Ljava/awt/image/ColorModel;)V", nullptr, $PUBLIC, $method(static_cast<void(XSurfaceData::*)($SurfaceType*,$ColorModel*)>(&XSurfaceData::init$))},
	{"XCreateGC", "(J)J", nullptr, $PROTECTED | $STATIC | $NATIVE, $method(static_cast<int64_t(*)(int64_t)>(&XSurfaceData::XCreateGC))},
	{"XResetClip", "(J)V", nullptr, $PROTECTED | $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t)>(&XSurfaceData::XResetClip))},
	{"XSetClip", "(JIIIILsun/java2d/pipe/Region;)V", nullptr, $PROTECTED | $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t,int32_t,int32_t,int32_t,int32_t,$Region*)>(&XSurfaceData::XSetClip))},
	{"XSetGraphicsExposures", "(JZ)V", nullptr, $PROTECTED | $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t,bool)>(&XSurfaceData::XSetGraphicsExposures))},
	{"flushNativeSurface", "()V", nullptr, $PROTECTED | $NATIVE},
	{"initOps", "(Lsun/awt/X11ComponentPeer;Lsun/awt/X11GraphicsConfig;I)V", nullptr, $PROTECTED | $NATIVE},
	{"isDrawableValid", "()Z", nullptr, $PROTECTED | $NATIVE},
	{"isX11SurfaceDataInitialized", "()Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)()>(&XSurfaceData::isX11SurfaceDataInitialized))},
	{"setInvalid", "()V", nullptr, $PROTECTED | $NATIVE},
	{"setX11SurfaceDataInitialized", "()V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)()>(&XSurfaceData::setX11SurfaceDataInitialized))},
	{}
};

#define _METHOD_INDEX_XCreateGC 1
#define _METHOD_INDEX_XResetClip 2
#define _METHOD_INDEX_XSetClip 3
#define _METHOD_INDEX_XSetGraphicsExposures 4
#define _METHOD_INDEX_flushNativeSurface 5
#define _METHOD_INDEX_initOps 6
#define _METHOD_INDEX_isDrawableValid 7
#define _METHOD_INDEX_setInvalid 9

$ClassInfo _XSurfaceData_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"sun.java2d.x11.XSurfaceData",
	"sun.java2d.SurfaceData",
	nullptr,
	_XSurfaceData_FieldInfo_,
	_XSurfaceData_MethodInfo_
};

$Object* allocate$XSurfaceData($Class* clazz) {
	return $of($alloc(XSurfaceData));
}

bool XSurfaceData::isX11SurfaceDataInitialized$ = false;

bool XSurfaceData::isX11SurfaceDataInitialized() {
	$init(XSurfaceData);
	return XSurfaceData::isX11SurfaceDataInitialized$;
}

void XSurfaceData::setX11SurfaceDataInitialized() {
	$init(XSurfaceData);
	XSurfaceData::isX11SurfaceDataInitialized$ = true;
}

void XSurfaceData::init$($SurfaceType* surfaceType, $ColorModel* cm) {
	$SurfaceData::init$(surfaceType, cm);
}

void XSurfaceData::initOps($X11ComponentPeer* peer, $X11GraphicsConfig* gc, int32_t depth) {
	$prepareNative(XSurfaceData, initOps, void, $X11ComponentPeer* peer, $X11GraphicsConfig* gc, int32_t depth);
	$invokeNative(peer, gc, depth);
	$finishNative();
}

int64_t XSurfaceData::XCreateGC(int64_t pXSData) {
	$init(XSurfaceData);
	int64_t $ret = 0;
	$prepareNativeStatic(XSurfaceData, XCreateGC, int64_t, int64_t pXSData);
	$ret = $invokeNativeStatic(pXSData);
	$finishNativeStatic();
	return $ret;
}

void XSurfaceData::XResetClip(int64_t xgc) {
	$init(XSurfaceData);
	$prepareNativeStatic(XSurfaceData, XResetClip, void, int64_t xgc);
	$invokeNativeStatic(xgc);
	$finishNativeStatic();
}

void XSurfaceData::XSetClip(int64_t xgc, int32_t lox, int32_t loy, int32_t hix, int32_t hiy, $Region* complexclip) {
	$init(XSurfaceData);
	$prepareNativeStatic(XSurfaceData, XSetClip, void, int64_t xgc, int32_t lox, int32_t loy, int32_t hix, int32_t hiy, $Region* complexclip);
	$invokeNativeStatic(xgc, lox, loy, hix, hiy, complexclip);
	$finishNativeStatic();
}

void XSurfaceData::flushNativeSurface() {
	$prepareNative(XSurfaceData, flushNativeSurface, void);
	$invokeNative();
	$finishNative();
}

bool XSurfaceData::isDrawableValid() {
	bool $ret = false;
	$prepareNative(XSurfaceData, isDrawableValid, bool);
	$ret = $invokeNative();
	$finishNative();
	return $ret;
}

void XSurfaceData::setInvalid() {
	$prepareNative(XSurfaceData, setInvalid, void);
	$invokeNative();
	$finishNative();
}

void XSurfaceData::XSetGraphicsExposures(int64_t xgc, bool needExposures) {
	$init(XSurfaceData);
	$prepareNativeStatic(XSurfaceData, XSetGraphicsExposures, void, int64_t xgc, bool needExposures);
	$invokeNativeStatic(xgc, needExposures);
	$finishNativeStatic();
}

void clinit$XSurfaceData($Class* class$) {
	XSurfaceData::isX11SurfaceDataInitialized$ = false;
}

XSurfaceData::XSurfaceData() {
}

$Class* XSurfaceData::load$($String* name, bool initialize) {
	$loadClass(XSurfaceData, name, initialize, &_XSurfaceData_ClassInfo_, clinit$XSurfaceData, allocate$XSurfaceData);
	return class$;
}

$Class* XSurfaceData::class$ = nullptr;

		} // x11
	} // java2d
} // sun
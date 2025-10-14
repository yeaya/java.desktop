#include <sun/java2d/SunGraphicsEnvironment.h>

#include <java/awt/AWTError.h>
#include <java/awt/Color.h>
#include <java/awt/Dimension.h>
#include <java/awt/Font.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/GraphicsDevice.h>
#include <java/awt/GraphicsEnvironment.h>
#include <java/awt/Image.h>
#include <java/awt/Insets.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Toolkit.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/peer/ComponentPeer.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/Double.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/NumberFormatException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/Arrays.h>
#include <java/util/Locale.h>
#include <java/util/Set.h>
#include <java/util/TreeMap.h>
#include <sun/awt/DisplayChangedListener.h>
#include <sun/awt/SunDisplayChanger.h>
#include <sun/font/FontManager.h>
#include <sun/font/FontManagerFactory.h>
#include <sun/font/FontManagerForSGE.h>
#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/pipe/Region.h>
#include <sun/security/action/GetPropertyAction.h>
#include <jcpp.h>

#undef DIALOG
#undef PLAIN

using $FontArray = $Array<::java::awt::Font>;
using $GraphicsDeviceArray = $Array<::java::awt::GraphicsDevice>;
using $AWTError = ::java::awt::AWTError;
using $Color = ::java::awt::Color;
using $Dimension = ::java::awt::Dimension;
using $Font = ::java::awt::Font;
using $Graphics2D = ::java::awt::Graphics2D;
using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $GraphicsDevice = ::java::awt::GraphicsDevice;
using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
using $Image = ::java::awt::Image;
using $Insets = ::java::awt::Insets;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $Toolkit = ::java::awt::Toolkit;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $ComponentPeer = ::java::awt::peer::ComponentPeer;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $NumberFormatException = ::java::lang::NumberFormatException;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Arrays = ::java::util::Arrays;
using $Locale = ::java::util::Locale;
using $Set = ::java::util::Set;
using $TreeMap = ::java::util::TreeMap;
using $DisplayChangedListener = ::sun::awt::DisplayChangedListener;
using $SunDisplayChanger = ::sun::awt::SunDisplayChanger;
using $FontManager = ::sun::font::FontManager;
using $FontManagerFactory = ::sun::font::FontManagerFactory;
using $FontManagerForSGE = ::sun::font::FontManagerForSGE;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $Region = ::sun::java2d::pipe::Region;
using $GetPropertyAction = ::sun::security::action::GetPropertyAction;

namespace sun {
	namespace java2d {

$CompoundAttribute _SunGraphicsEnvironment_MethodAnnotations_useAlternateFontforJALocales28[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _SunGraphicsEnvironment_FieldInfo_[] = {
	{"defaultFont", "Ljava/awt/Font;", nullptr, $PRIVATE | $FINAL, $field(SunGraphicsEnvironment, defaultFont)},
	{"uiScaleEnabled", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SunGraphicsEnvironment, uiScaleEnabled)},
	{"debugScale", "D", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SunGraphicsEnvironment, debugScale)},
	{"screens", "[Ljava/awt/GraphicsDevice;", nullptr, $PROTECTED, $field(SunGraphicsEnvironment, screens)},
	{"displayChanger", "Lsun/awt/SunDisplayChanger;", nullptr, $PROTECTED, $field(SunGraphicsEnvironment, displayChanger)},
	{}
};

$MethodInfo _SunGraphicsEnvironment_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SunGraphicsEnvironment::*)()>(&SunGraphicsEnvironment::init$))},
	{"addDisplayChangedListener", "(Lsun/awt/DisplayChangedListener;)V", nullptr, $PUBLIC},
	{"createGraphics", "(Ljava/awt/image/BufferedImage;)Ljava/awt/Graphics2D;", nullptr, $PUBLIC},
	{"displayChanged", "()V", nullptr, $PUBLIC},
	{"getAllFonts", "()[Ljava/awt/Font;", nullptr, $PUBLIC},
	{"getAvailableFontFamilyNames", "(Ljava/util/Locale;)[Ljava/lang/String;", nullptr, $PUBLIC},
	{"getAvailableFontFamilyNames", "()[Ljava/lang/String;", nullptr, $PUBLIC},
	{"getDebugScale", "()D", nullptr, $PUBLIC | $STATIC, $method(static_cast<double(*)()>(&SunGraphicsEnvironment::getDebugScale))},
	{"getDefaultScreenDevice", "()Ljava/awt/GraphicsDevice;", nullptr, $PUBLIC},
	{"getFontManagerForSGE", "()Lsun/font/FontManagerForSGE;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$FontManagerForSGE*(*)()>(&SunGraphicsEnvironment::getFontManagerForSGE))},
	{"getGCDeviceBounds", "(Ljava/awt/GraphicsConfiguration;)Ljava/awt/Rectangle;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Rectangle*(*)($GraphicsConfiguration*)>(&SunGraphicsEnvironment::getGCDeviceBounds))},
	{"getGraphicsConfigurationAtPoint", "(Ljava/awt/GraphicsConfiguration;DD)Ljava/awt/GraphicsConfiguration;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$GraphicsConfiguration*(*)($GraphicsConfiguration*,double,double)>(&SunGraphicsEnvironment::getGraphicsConfigurationAtPoint))},
	{"getNumScreens", "()I", nullptr, $PROTECTED | $ABSTRACT},
	{"getScaleFactor", "(Ljava/lang/String;)D", nullptr, $PUBLIC | $STATIC, $method(static_cast<double(*)($String*)>(&SunGraphicsEnvironment::getScaleFactor))},
	{"getScreenDevices", "()[Ljava/awt/GraphicsDevice;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"getUsableBounds", "(Ljava/awt/GraphicsDevice;)Ljava/awt/Rectangle;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Rectangle*(*)($GraphicsDevice*)>(&SunGraphicsEnvironment::getUsableBounds))},
	{"isDisplayLocal", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"isFlipStrategyPreferred", "(Ljava/awt/peer/ComponentPeer;)Z", nullptr, $PUBLIC},
	{"isUIScaleEnabled", "()Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)()>(&SunGraphicsEnvironment::isUIScaleEnabled))},
	{"makeScreenDevice", "(I)Ljava/awt/GraphicsDevice;", nullptr, $PROTECTED | $ABSTRACT},
	{"paletteChanged", "()V", nullptr, $PUBLIC},
	{"removeDisplayChangedListener", "(Lsun/awt/DisplayChangedListener;)V", nullptr, $PUBLIC},
	{"toDeviceSpace", "(II)Ljava/awt/Point;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Point*(*)(int32_t,int32_t)>(&SunGraphicsEnvironment::toDeviceSpace))},
	{"toDeviceSpace", "(Ljava/awt/GraphicsConfiguration;IIII)Ljava/awt/Rectangle;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Rectangle*(*)($GraphicsConfiguration*,int32_t,int32_t,int32_t,int32_t)>(&SunGraphicsEnvironment::toDeviceSpace))},
	{"toDeviceSpaceAbs", "(II)Ljava/awt/Point;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Point*(*)(int32_t,int32_t)>(&SunGraphicsEnvironment::toDeviceSpaceAbs))},
	{"toDeviceSpaceAbs", "(Ljava/awt/Rectangle;)Ljava/awt/Rectangle;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Rectangle*(*)($Rectangle*)>(&SunGraphicsEnvironment::toDeviceSpaceAbs))},
	{"toDeviceSpaceAbs", "(Ljava/awt/GraphicsConfiguration;IIII)Ljava/awt/Rectangle;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Rectangle*(*)($GraphicsConfiguration*,int32_t,int32_t,int32_t,int32_t)>(&SunGraphicsEnvironment::toDeviceSpaceAbs))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"toUserSpace", "(Ljava/awt/GraphicsConfiguration;II)Ljava/awt/Dimension;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Dimension*(*)($GraphicsConfiguration*,int32_t,int32_t)>(&SunGraphicsEnvironment::toUserSpace))},
	{"useAlternateFontforJALocales", "()V", nullptr, $PUBLIC | $STATIC | $DEPRECATED, $method(static_cast<void(*)()>(&SunGraphicsEnvironment::useAlternateFontforJALocales)), nullptr, nullptr, _SunGraphicsEnvironment_MethodAnnotations_useAlternateFontforJALocales28},
	{}
};

$ClassInfo _SunGraphicsEnvironment_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"sun.java2d.SunGraphicsEnvironment",
	"java.awt.GraphicsEnvironment",
	"sun.awt.DisplayChangedListener",
	_SunGraphicsEnvironment_FieldInfo_,
	_SunGraphicsEnvironment_MethodInfo_
};

$Object* allocate$SunGraphicsEnvironment($Class* clazz) {
	return $of($alloc(SunGraphicsEnvironment));
}

int32_t SunGraphicsEnvironment::hashCode() {
	 return this->$GraphicsEnvironment::hashCode();
}

bool SunGraphicsEnvironment::equals(Object$* arg0) {
	 return this->$GraphicsEnvironment::equals(arg0);
}

$Object* SunGraphicsEnvironment::clone() {
	 return this->$GraphicsEnvironment::clone();
}

$String* SunGraphicsEnvironment::toString() {
	 return this->$GraphicsEnvironment::toString();
}

void SunGraphicsEnvironment::finalize() {
	this->$GraphicsEnvironment::finalize();
}

bool SunGraphicsEnvironment::uiScaleEnabled = false;
double SunGraphicsEnvironment::debugScale = 0.0;

void SunGraphicsEnvironment::init$() {
	$GraphicsEnvironment::init$();
	$init($Font);
	$set(this, defaultFont, $new($Font, $Font::DIALOG, $Font::PLAIN, 12));
	$set(this, displayChanger, $new($SunDisplayChanger));
}

$GraphicsDeviceArray* SunGraphicsEnvironment::getScreenDevices() {
	$synchronized(this) {
		$var($GraphicsDeviceArray, ret, this->screens);
		if (ret == nullptr) {
			int32_t num = getNumScreens();
			$assign(ret, $new($GraphicsDeviceArray, num));
			for (int32_t i = 0; i < num; ++i) {
				ret->set(i, $(makeScreenDevice(i)));
			}
			$set(this, screens, ret);
		}
		return ret;
	}
}

$GraphicsDevice* SunGraphicsEnvironment::getDefaultScreenDevice() {
	$var($GraphicsDeviceArray, screens, getScreenDevices());
	if ($nc(screens)->length == 0) {
		$throwNew($AWTError, "no screen devices"_s);
	}
	return $nc(screens)->get(0);
}

$Graphics2D* SunGraphicsEnvironment::createGraphics($BufferedImage* img) {
	if (img == nullptr) {
		$throwNew($NullPointerException, "BufferedImage cannot be null"_s);
	}
	$var($SurfaceData, sd, $SurfaceData::getPrimarySurfaceData(img));
	$init($Color);
	return $new($SunGraphics2D, sd, $Color::white, $Color::black, this->defaultFont);
}

$FontManagerForSGE* SunGraphicsEnvironment::getFontManagerForSGE() {
	$init(SunGraphicsEnvironment);
	$var($FontManager, fm, $FontManagerFactory::getInstance());
	return $cast($FontManagerForSGE, fm);
}

void SunGraphicsEnvironment::useAlternateFontforJALocales() {
	$init(SunGraphicsEnvironment);
	$nc($(getFontManagerForSGE()))->useAlternateFontforJALocales();
}

$FontArray* SunGraphicsEnvironment::getAllFonts() {
	$var($FontManagerForSGE, fm, getFontManagerForSGE());
	$var($FontArray, installedFonts, $nc(fm)->getAllInstalledFonts());
	$var($FontArray, created, fm->getCreatedFonts());
	if (created == nullptr || $nc(created)->length == 0) {
		return installedFonts;
	} else {
		int32_t newlen = $nc(installedFonts)->length + created->length;
		$var($FontArray, fonts, $fcast($FontArray, $Arrays::copyOf(installedFonts, newlen)));
		$System::arraycopy(created, 0, fonts, installedFonts->length, created->length);
		return fonts;
	}
}

$StringArray* SunGraphicsEnvironment::getAvailableFontFamilyNames($Locale* requestedLocale) {
	$var($FontManagerForSGE, fm, getFontManagerForSGE());
	$var($StringArray, installed, $nc(fm)->getInstalledFontFamilyNames(requestedLocale));
	$var($TreeMap, map, fm->getCreatedFontFamilyNames());
	if (map == nullptr || $nc(map)->size() == 0) {
		return installed;
	} else {
		for (int32_t i = 0; i < $nc(installed)->length; ++i) {
			map->put($($nc(installed->get(i))->toLowerCase(requestedLocale)), installed->get(i));
		}
		$var($StringArray, retval, $new($StringArray, map->size()));
		$var($ObjectArray, keyNames, $nc($(map->keySet()))->toArray());
		for (int32_t i = 0; i < $nc(keyNames)->length; ++i) {
			retval->set(i, $cast($String, $(map->get(keyNames->get(i)))));
		}
		return retval;
	}
}

$StringArray* SunGraphicsEnvironment::getAvailableFontFamilyNames() {
	return getAvailableFontFamilyNames($($Locale::getDefault()));
}

$Rectangle* SunGraphicsEnvironment::getUsableBounds($GraphicsDevice* gd) {
	$init(SunGraphicsEnvironment);
	$var($GraphicsConfiguration, gc, $nc(gd)->getDefaultConfiguration());
	$var($Insets, insets, $nc($($Toolkit::getDefaultToolkit()))->getScreenInsets(gc));
	$var($Rectangle, usableBounds, $nc(gc)->getBounds());
	$nc(usableBounds)->x += $nc(insets)->left;
	usableBounds->y += insets->top;
	usableBounds->width -= (insets->left + insets->right);
	usableBounds->height -= (insets->top + insets->bottom);
	return usableBounds;
}

void SunGraphicsEnvironment::displayChanged() {
	{
		$var($GraphicsDeviceArray, arr$, getScreenDevices());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($GraphicsDevice, gd, arr$->get(i$));
			{
				if ($instanceOf($DisplayChangedListener, gd)) {
					$nc(($cast($DisplayChangedListener, gd)))->displayChanged();
				}
			}
		}
	}
	$nc(this->displayChanger)->notifyListeners();
}

void SunGraphicsEnvironment::paletteChanged() {
	$nc(this->displayChanger)->notifyPaletteChanged();
}

void SunGraphicsEnvironment::addDisplayChangedListener($DisplayChangedListener* client) {
	$nc(this->displayChanger)->add(client);
}

void SunGraphicsEnvironment::removeDisplayChangedListener($DisplayChangedListener* client) {
	$nc(this->displayChanger)->remove(client);
}

bool SunGraphicsEnvironment::isFlipStrategyPreferred($ComponentPeer* peer) {
	return false;
}

bool SunGraphicsEnvironment::isUIScaleEnabled() {
	$init(SunGraphicsEnvironment);
	return SunGraphicsEnvironment::uiScaleEnabled;
}

double SunGraphicsEnvironment::getDebugScale() {
	$init(SunGraphicsEnvironment);
	return SunGraphicsEnvironment::debugScale;
}

double SunGraphicsEnvironment::getScaleFactor($String* propertyName) {
	$init(SunGraphicsEnvironment);
	$beforeCallerSensitive();
	$var($String, scaleFactor, $cast($String, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($GetPropertyAction, propertyName, "-1"_s)))));
	if (scaleFactor == nullptr || $nc(scaleFactor)->equals("-1"_s)) {
		return (double)-1;
	}
	try {
		double units = 1.0;
		if ($nc(scaleFactor)->endsWith("x"_s)) {
			$assign(scaleFactor, scaleFactor->substring(0, scaleFactor->length() - 1));
		} else if (scaleFactor->endsWith("dpi"_s)) {
			units = (double)96;
			$assign(scaleFactor, scaleFactor->substring(0, scaleFactor->length() - 3));
		} else if (scaleFactor->endsWith("%"_s)) {
			units = (double)100;
			$assign(scaleFactor, scaleFactor->substring(0, scaleFactor->length() - 1));
		}
		double scale = $Double::parseDouble(scaleFactor);
		return scale <= 0 ? (double)-1 : scale / units;
	} catch ($NumberFormatException&) {
		$var($NumberFormatException, ignored, $catch());
		return (double)-1;
	}
	$shouldNotReachHere();
}

$GraphicsConfiguration* SunGraphicsEnvironment::getGraphicsConfigurationAtPoint($GraphicsConfiguration* current, double x, double y) {
	$init(SunGraphicsEnvironment);
	if ($nc($($nc(current)->getBounds()))->contains(x, y)) {
		return current;
	}
	$var($GraphicsEnvironment, env, getLocalGraphicsEnvironment());
	{
		$var($GraphicsDeviceArray, arr$, $nc(env)->getScreenDevices());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($GraphicsDevice, device, arr$->get(i$));
			{
				$var($GraphicsConfiguration, config, $nc(device)->getDefaultConfiguration());
				if ($nc($($nc(config)->getBounds()))->contains(x, y)) {
					return config;
				}
			}
		}
	}
	return current;
}

$Rectangle* SunGraphicsEnvironment::getGCDeviceBounds($GraphicsConfiguration* config) {
	$init(SunGraphicsEnvironment);
	$var($AffineTransform, tx, $nc(config)->getDefaultTransform());
	$var($Rectangle, bounds, config->getBounds());
	$nc(bounds)->width *= $nc(tx)->getScaleX();
	bounds->height *= tx->getScaleY();
	return bounds;
}

$Dimension* SunGraphicsEnvironment::toUserSpace($GraphicsConfiguration* gc, int32_t w, int32_t h) {
	$init(SunGraphicsEnvironment);
	$var($AffineTransform, tx, $nc(gc)->getDefaultTransform());
	int32_t var$0 = $Region::clipRound(w / $nc(tx)->getScaleX());
	return $new($Dimension, var$0, $Region::clipRound(h / $nc(tx)->getScaleY()));
}

$Point* SunGraphicsEnvironment::toDeviceSpaceAbs(int32_t x, int32_t y) {
	$init(SunGraphicsEnvironment);
	$var($GraphicsConfiguration, gc, $nc($($nc($(getLocalGraphicsEnvironment()))->getDefaultScreenDevice()))->getDefaultConfiguration());
	$assign(gc, getGraphicsConfigurationAtPoint(gc, (double)x, (double)y));
	return $nc($(toDeviceSpaceAbs(gc, x, y, 0, 0)))->getLocation();
}

$Rectangle* SunGraphicsEnvironment::toDeviceSpaceAbs($Rectangle* rect) {
	$init(SunGraphicsEnvironment);
	$var($GraphicsConfiguration, gc, $nc($($nc($(getLocalGraphicsEnvironment()))->getDefaultScreenDevice()))->getDefaultConfiguration());
	$assign(gc, getGraphicsConfigurationAtPoint(gc, (double)$nc(rect)->x, (double)rect->y));
	return toDeviceSpaceAbs(gc, $nc(rect)->x, rect->y, rect->width, rect->height);
}

$Rectangle* SunGraphicsEnvironment::toDeviceSpaceAbs($GraphicsConfiguration* gc, int32_t x, int32_t y, int32_t w, int32_t h) {
	$init(SunGraphicsEnvironment);
	$var($AffineTransform, tx, $nc(gc)->getDefaultTransform());
	$var($Rectangle, screen, gc->getBounds());
	int32_t var$0 = $nc(screen)->x + $Region::clipRound((x - screen->x) * $nc(tx)->getScaleX());
	int32_t var$1 = screen->y + $Region::clipRound((y - screen->y) * $nc(tx)->getScaleY());
	int32_t var$2 = $Region::clipRound(w * $nc(tx)->getScaleX());
	return $new($Rectangle, var$0, var$1, var$2, $Region::clipRound(h * $nc(tx)->getScaleY()));
}

$Point* SunGraphicsEnvironment::toDeviceSpace(int32_t x, int32_t y) {
	$init(SunGraphicsEnvironment);
	$var($GraphicsConfiguration, gc, $nc($($nc($(getLocalGraphicsEnvironment()))->getDefaultScreenDevice()))->getDefaultConfiguration());
	$assign(gc, getGraphicsConfigurationAtPoint(gc, (double)x, (double)y));
	return $nc($(toDeviceSpace(gc, x, y, 0, 0)))->getLocation();
}

$Rectangle* SunGraphicsEnvironment::toDeviceSpace($GraphicsConfiguration* gc, int32_t x, int32_t y, int32_t w, int32_t h) {
	$init(SunGraphicsEnvironment);
	$var($AffineTransform, tx, $nc(gc)->getDefaultTransform());
	int32_t var$0 = $Region::clipRound(x * $nc(tx)->getScaleX());
	int32_t var$1 = $Region::clipRound(y * $nc(tx)->getScaleY());
	int32_t var$2 = $Region::clipRound(w * $nc(tx)->getScaleX());
	return $new($Rectangle, var$0, var$1, var$2, $Region::clipRound(h * $nc(tx)->getScaleY()));
}

void clinit$SunGraphicsEnvironment($Class* class$) {
	$beforeCallerSensitive();
	{
		SunGraphicsEnvironment::uiScaleEnabled = "true"_s->equals($($AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($GetPropertyAction, "sun.java2d.uiScale.enabled"_s, "true"_s)))));
		SunGraphicsEnvironment::debugScale = SunGraphicsEnvironment::uiScaleEnabled ? SunGraphicsEnvironment::getScaleFactor("sun.java2d.uiScale"_s) : (double)-1;
	}
}

SunGraphicsEnvironment::SunGraphicsEnvironment() {
}

$Class* SunGraphicsEnvironment::load$($String* name, bool initialize) {
	$loadClass(SunGraphicsEnvironment, name, initialize, &_SunGraphicsEnvironment_ClassInfo_, clinit$SunGraphicsEnvironment, allocate$SunGraphicsEnvironment);
	return class$;
}

$Class* SunGraphicsEnvironment::class$ = nullptr;

	} // java2d
} // sun
#include <java/awt/GraphicsDevice.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/DisplayMode.h>
#include <java/awt/GraphicsConfigTemplate.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/GraphicsDevice$1.h>
#include <java/awt/GraphicsDevice$WindowTranslucency.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Shape.h>
#include <java/awt/Toolkit.h>
#include <java/awt/Window.h>
#include <java/awt/image/ColorModel.h>
#include <java/lang/UnsupportedOperationException.h>
#include <sun/awt/AppContext.h>
#include <sun/awt/SunToolkit.h>
#include <jcpp.h>

#undef TYPE_IMAGE_BUFFER
#undef TYPE_PRINTER
#undef TYPE_RASTER_SCREEN

using $DisplayModeArray = $Array<::java::awt::DisplayMode>;
using $GraphicsConfigurationArray = $Array<::java::awt::GraphicsConfiguration>;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $DisplayMode = ::java::awt::DisplayMode;
using $GraphicsConfigTemplate = ::java::awt::GraphicsConfigTemplate;
using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $GraphicsDevice$1 = ::java::awt::GraphicsDevice$1;
using $GraphicsDevice$WindowTranslucency = ::java::awt::GraphicsDevice$WindowTranslucency;
using $Rectangle = ::java::awt::Rectangle;
using $Shape = ::java::awt::Shape;
using $Toolkit = ::java::awt::Toolkit;
using $Window = ::java::awt::Window;
using $ColorModel = ::java::awt::image::ColorModel;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $AppContext = ::sun::awt::AppContext;
using $SunToolkit = ::sun::awt::SunToolkit;

namespace java {
	namespace awt {

$FieldInfo _GraphicsDevice_FieldInfo_[] = {
	{"fullScreenWindow", "Ljava/awt/Window;", nullptr, $PRIVATE, $field(GraphicsDevice, fullScreenWindow)},
	{"fullScreenAppContext", "Lsun/awt/AppContext;", nullptr, $PRIVATE, $field(GraphicsDevice, fullScreenAppContext)},
	{"fsAppContextLock", "Ljava/lang/Object;", nullptr, $PRIVATE | $FINAL, $field(GraphicsDevice, fsAppContextLock)},
	{"windowedModeBounds", "Ljava/awt/Rectangle;", nullptr, $PRIVATE, $field(GraphicsDevice, windowedModeBounds)},
	{"TYPE_RASTER_SCREEN", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(GraphicsDevice, TYPE_RASTER_SCREEN)},
	{"TYPE_PRINTER", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(GraphicsDevice, TYPE_PRINTER)},
	{"TYPE_IMAGE_BUFFER", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(GraphicsDevice, TYPE_IMAGE_BUFFER)},
	{}
};

$MethodInfo _GraphicsDevice_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(GraphicsDevice::*)()>(&GraphicsDevice::init$))},
	{"getAvailableAcceleratedMemory", "()I", nullptr, $PUBLIC},
	{"getBestConfiguration", "(Ljava/awt/GraphicsConfigTemplate;)Ljava/awt/GraphicsConfiguration;", nullptr, $PUBLIC},
	{"getConfigurations", "()[Ljava/awt/GraphicsConfiguration;", nullptr, $PUBLIC | $ABSTRACT},
	{"getDefaultConfiguration", "()Ljava/awt/GraphicsConfiguration;", nullptr, $PUBLIC | $ABSTRACT},
	{"getDisplayMode", "()Ljava/awt/DisplayMode;", nullptr, $PUBLIC},
	{"getDisplayModes", "()[Ljava/awt/DisplayMode;", nullptr, $PUBLIC},
	{"getFullScreenWindow", "()Ljava/awt/Window;", nullptr, $PUBLIC},
	{"getIDstring", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getTranslucencyCapableGC", "()Ljava/awt/GraphicsConfiguration;", nullptr, 0},
	{"getType", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"isDisplayChangeSupported", "()Z", nullptr, $PUBLIC},
	{"isFullScreenSupported", "()Z", nullptr, $PUBLIC},
	{"isWindowOpacitySupported", "()Z", nullptr, $STATIC, $method(static_cast<bool(*)()>(&GraphicsDevice::isWindowOpacitySupported))},
	{"isWindowPerpixelTranslucencySupported", "()Z", nullptr, 0},
	{"isWindowShapingSupported", "()Z", nullptr, $STATIC, $method(static_cast<bool(*)()>(&GraphicsDevice::isWindowShapingSupported))},
	{"isWindowTranslucencySupported", "(Ljava/awt/GraphicsDevice$WindowTranslucency;)Z", nullptr, $PUBLIC},
	{"setDisplayMode", "(Ljava/awt/DisplayMode;)V", nullptr, $PUBLIC},
	{"setFullScreenWindow", "(Ljava/awt/Window;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _GraphicsDevice_InnerClassesInfo_[] = {
	{"java.awt.GraphicsDevice$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{"java.awt.GraphicsDevice$WindowTranslucency", "java.awt.GraphicsDevice", "WindowTranslucency", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _GraphicsDevice_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.awt.GraphicsDevice",
	"java.lang.Object",
	nullptr,
	_GraphicsDevice_FieldInfo_,
	_GraphicsDevice_MethodInfo_,
	nullptr,
	nullptr,
	_GraphicsDevice_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.awt.GraphicsDevice$1,java.awt.GraphicsDevice$WindowTranslucency"
};

$Object* allocate$GraphicsDevice($Class* clazz) {
	return $of($alloc(GraphicsDevice));
}

void GraphicsDevice::init$() {
	$set(this, fsAppContextLock, $new($Object));
}

$GraphicsConfiguration* GraphicsDevice::getBestConfiguration($GraphicsConfigTemplate* gct) {
	$var($GraphicsConfigurationArray, configs, getConfigurations());
	return $nc(gct)->getBestConfiguration(configs);
}

bool GraphicsDevice::isFullScreenSupported() {
	return false;
}

void GraphicsDevice::setFullScreenWindow($Window* w) {
	$useLocalCurrentObjectStackCache();
	if (w != nullptr) {
		if (w->getShape() != nullptr) {
			w->setShape(nullptr);
		}
		if (w->getOpacity() < 1.0f) {
			w->setOpacity(1.0f);
		}
		if (!w->isOpaque()) {
			$var($Color, bgColor, w->getBackground());
			int32_t var$0 = $nc(bgColor)->getRed();
			int32_t var$1 = bgColor->getGreen();
			$assign(bgColor, $new($Color, var$0, var$1, bgColor->getBlue(), 255));
			w->setBackground(bgColor);
		}
		$var($GraphicsConfiguration, gc, w->getGraphicsConfiguration());
		bool var$2 = gc != nullptr && gc->getDevice() != this;
		if (var$2 && $nc($(gc->getDevice()))->getFullScreenWindow() == w) {
			$nc($(gc->getDevice()))->setFullScreenWindow(nullptr);
		}
	}
	if (this->fullScreenWindow != nullptr && this->windowedModeBounds != nullptr) {
		if ($nc(this->windowedModeBounds)->width == 0) {
			$nc(this->windowedModeBounds)->width = 1;
		}
		if ($nc(this->windowedModeBounds)->height == 0) {
			$nc(this->windowedModeBounds)->height = 1;
		}
		$nc(this->fullScreenWindow)->setBounds(this->windowedModeBounds);
	}
	$synchronized(this->fsAppContextLock) {
		if (w == nullptr) {
			$set(this, fullScreenAppContext, nullptr);
		} else {
			$set(this, fullScreenAppContext, $AppContext::getAppContext());
		}
		$set(this, fullScreenWindow, w);
	}
	if (this->fullScreenWindow != nullptr) {
		$set(this, windowedModeBounds, $nc(this->fullScreenWindow)->getBounds());
		$var($GraphicsConfiguration, gc, getDefaultConfiguration());
		$var($Rectangle, screenBounds, $nc(gc)->getBounds());
		if ($SunToolkit::isDispatchThreadForAppContext(this->fullScreenWindow)) {
			$nc(this->fullScreenWindow)->setGraphicsConfiguration(gc);
		}
		$nc(this->fullScreenWindow)->setBounds($nc(screenBounds)->x, screenBounds->y, screenBounds->width, screenBounds->height);
		$nc(this->fullScreenWindow)->setVisible(true);
		$nc(this->fullScreenWindow)->toFront();
	}
}

$Window* GraphicsDevice::getFullScreenWindow() {
	$var($Window, returnWindow, nullptr);
	$synchronized(this->fsAppContextLock) {
		if (this->fullScreenAppContext == $AppContext::getAppContext()) {
			$assign(returnWindow, this->fullScreenWindow);
		}
	}
	return returnWindow;
}

bool GraphicsDevice::isDisplayChangeSupported() {
	return false;
}

void GraphicsDevice::setDisplayMode($DisplayMode* dm) {
	$throwNew($UnsupportedOperationException, "Cannot change display mode"_s);
}

$DisplayMode* GraphicsDevice::getDisplayMode() {
	$useLocalCurrentObjectStackCache();
	$var($GraphicsConfiguration, gc, getDefaultConfiguration());
	$var($Rectangle, r, $nc(gc)->getBounds());
	$var($ColorModel, cm, gc->getColorModel());
	return $new($DisplayMode, $nc(r)->width, r->height, $nc(cm)->getPixelSize(), 0);
}

$DisplayModeArray* GraphicsDevice::getDisplayModes() {
	return $new($DisplayModeArray, {$(getDisplayMode())});
}

int32_t GraphicsDevice::getAvailableAcceleratedMemory() {
	return -1;
}

bool GraphicsDevice::isWindowTranslucencySupported($GraphicsDevice$WindowTranslucency* translucencyKind) {
	$init($GraphicsDevice$1);
	switch ($nc($GraphicsDevice$1::$SwitchMap$java$awt$GraphicsDevice$WindowTranslucency)->get($nc((translucencyKind))->ordinal())) {
	case 1:
		{
			return isWindowShapingSupported();
		}
	case 2:
		{
			return isWindowOpacitySupported();
		}
	case 3:
		{
			return isWindowPerpixelTranslucencySupported();
		}
	}
	return false;
}

bool GraphicsDevice::isWindowShapingSupported() {
	$var($Toolkit, curToolkit, $Toolkit::getDefaultToolkit());
	if (!($instanceOf($SunToolkit, curToolkit))) {
		return false;
	}
	return $nc(($cast($SunToolkit, curToolkit)))->isWindowShapingSupported();
}

bool GraphicsDevice::isWindowOpacitySupported() {
	$var($Toolkit, curToolkit, $Toolkit::getDefaultToolkit());
	if (!($instanceOf($SunToolkit, curToolkit))) {
		return false;
	}
	return $nc(($cast($SunToolkit, curToolkit)))->isWindowOpacitySupported();
}

bool GraphicsDevice::isWindowPerpixelTranslucencySupported() {
	$var($Toolkit, curToolkit, $Toolkit::getDefaultToolkit());
	if (!($instanceOf($SunToolkit, curToolkit))) {
		return false;
	}
	if (!$nc(($cast($SunToolkit, curToolkit)))->isWindowTranslucencySupported()) {
		return false;
	}
	return getTranslucencyCapableGC() != nullptr;
}

$GraphicsConfiguration* GraphicsDevice::getTranslucencyCapableGC() {
	$useLocalCurrentObjectStackCache();
	$var($GraphicsConfiguration, defaultGC, getDefaultConfiguration());
	if ($nc(defaultGC)->isTranslucencyCapable()) {
		return defaultGC;
	}
	$var($GraphicsConfigurationArray, configs, getConfigurations());
	for (int32_t j = 0; j < $nc(configs)->length; ++j) {
		if ($nc(configs->get(j))->isTranslucencyCapable()) {
			return configs->get(j);
		}
	}
	return nullptr;
}

GraphicsDevice::GraphicsDevice() {
}

$Class* GraphicsDevice::load$($String* name, bool initialize) {
	$loadClass(GraphicsDevice, name, initialize, &_GraphicsDevice_ClassInfo_, allocate$GraphicsDevice);
	return class$;
}

$Class* GraphicsDevice::class$ = nullptr;

	} // awt
} // java
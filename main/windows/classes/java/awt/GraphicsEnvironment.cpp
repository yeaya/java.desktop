#include <java/awt/GraphicsEnvironment.h>

#include <java/awt/Font.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/GraphicsDevice.h>
#include <java/awt/GraphicsEnvironment$LocalGE.h>
#include <java/awt/HeadlessException.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/image/BufferedImage.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/Locale.h>
#include <sun/awt/PlatformGraphicsInfo.h>
#include <sun/font/FontManager.h>
#include <sun/font/FontManagerFactory.h>
#include <sun/java2d/SunGraphicsEnvironment.h>
#include <jcpp.h>

#undef INSTANCE
#undef TRUE

using $FontArray = $Array<::java::awt::Font>;
using $GraphicsDeviceArray = $Array<::java::awt::GraphicsDevice>;
using $Font = ::java::awt::Font;
using $Graphics2D = ::java::awt::Graphics2D;
using $GraphicsDevice = ::java::awt::GraphicsDevice;
using $GraphicsEnvironment$LocalGE = ::java::awt::GraphicsEnvironment$LocalGE;
using $HeadlessException = ::java::awt::HeadlessException;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Locale = ::java::util::Locale;
using $PlatformGraphicsInfo = ::sun::awt::PlatformGraphicsInfo;
using $FontManager = ::sun::font::FontManager;
using $FontManagerFactory = ::sun::font::FontManagerFactory;
using $SunGraphicsEnvironment = ::sun::java2d::SunGraphicsEnvironment;

namespace java {
	namespace awt {

class GraphicsEnvironment$$Lambda$lambda$getHeadlessProperty$0 : public $PrivilegedAction {
	$class(GraphicsEnvironment$$Lambda$lambda$getHeadlessProperty$0, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$() {
	}
	virtual $Object* run() override {
		 return $of(GraphicsEnvironment::lambda$getHeadlessProperty$0());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<GraphicsEnvironment$$Lambda$lambda$getHeadlessProperty$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo GraphicsEnvironment$$Lambda$lambda$getHeadlessProperty$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(GraphicsEnvironment$$Lambda$lambda$getHeadlessProperty$0::*)()>(&GraphicsEnvironment$$Lambda$lambda$getHeadlessProperty$0::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo GraphicsEnvironment$$Lambda$lambda$getHeadlessProperty$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.awt.GraphicsEnvironment$$Lambda$lambda$getHeadlessProperty$0",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	methodInfos
};
$Class* GraphicsEnvironment$$Lambda$lambda$getHeadlessProperty$0::load$($String* name, bool initialize) {
	$loadClass(GraphicsEnvironment$$Lambda$lambda$getHeadlessProperty$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* GraphicsEnvironment$$Lambda$lambda$getHeadlessProperty$0::class$ = nullptr;

$FieldInfo _GraphicsEnvironment_FieldInfo_[] = {
	{"headless", "Ljava/lang/Boolean;", nullptr, $PRIVATE | $STATIC, $staticField(GraphicsEnvironment, headless)},
	{"defaultHeadless", "Ljava/lang/Boolean;", nullptr, $PRIVATE | $STATIC, $staticField(GraphicsEnvironment, defaultHeadless)},
	{}
};

$MethodInfo _GraphicsEnvironment_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(GraphicsEnvironment::*)()>(&GraphicsEnvironment::init$))},
	{"checkHeadless", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&GraphicsEnvironment::checkHeadless)), "java.awt.HeadlessException"},
	{"createGraphics", "(Ljava/awt/image/BufferedImage;)Ljava/awt/Graphics2D;", nullptr, $PUBLIC | $ABSTRACT},
	{"getAllFonts", "()[Ljava/awt/Font;", nullptr, $PUBLIC | $ABSTRACT},
	{"getAvailableFontFamilyNames", "()[Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getAvailableFontFamilyNames", "(Ljava/util/Locale;)[Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getCenterPoint", "()Ljava/awt/Point;", nullptr, $PUBLIC, nullptr, "java.awt.HeadlessException"},
	{"getDefaultScreenDevice", "()Ljava/awt/GraphicsDevice;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.awt.HeadlessException"},
	{"getHeadlessMessage", "()Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$String*(*)()>(&GraphicsEnvironment::getHeadlessMessage))},
	{"getHeadlessProperty", "()Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)()>(&GraphicsEnvironment::getHeadlessProperty))},
	{"getLocalGraphicsEnvironment", "()Ljava/awt/GraphicsEnvironment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<GraphicsEnvironment*(*)()>(&GraphicsEnvironment::getLocalGraphicsEnvironment))},
	{"getMaximumWindowBounds", "()Ljava/awt/Rectangle;", nullptr, $PUBLIC, nullptr, "java.awt.HeadlessException"},
	{"getScreenDevices", "()[Ljava/awt/GraphicsDevice;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.awt.HeadlessException"},
	{"isHeadless", "()Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)()>(&GraphicsEnvironment::isHeadless))},
	{"isHeadlessInstance", "()Z", nullptr, $PUBLIC},
	{"lambda$getHeadlessProperty$0", "()Ljava/lang/Void;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Void*(*)()>(&GraphicsEnvironment::lambda$getHeadlessProperty$0))},
	{"preferLocaleFonts", "()V", nullptr, $PUBLIC},
	{"preferProportionalFonts", "()V", nullptr, $PUBLIC},
	{"registerFont", "(Ljava/awt/Font;)Z", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _GraphicsEnvironment_InnerClassesInfo_[] = {
	{"java.awt.GraphicsEnvironment$LocalGE", "java.awt.GraphicsEnvironment", "LocalGE", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _GraphicsEnvironment_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.awt.GraphicsEnvironment",
	"java.lang.Object",
	nullptr,
	_GraphicsEnvironment_FieldInfo_,
	_GraphicsEnvironment_MethodInfo_,
	nullptr,
	nullptr,
	_GraphicsEnvironment_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.awt.GraphicsEnvironment$LocalGE"
};

$Object* allocate$GraphicsEnvironment($Class* clazz) {
	return $of($alloc(GraphicsEnvironment));
}

$Boolean* GraphicsEnvironment::headless = nullptr;
$Boolean* GraphicsEnvironment::defaultHeadless = nullptr;

void GraphicsEnvironment::init$() {
}

GraphicsEnvironment* GraphicsEnvironment::getLocalGraphicsEnvironment() {
	$init($GraphicsEnvironment$LocalGE);
	return $GraphicsEnvironment$LocalGE::INSTANCE;
}

bool GraphicsEnvironment::isHeadless() {
	return getHeadlessProperty();
}

$String* GraphicsEnvironment::getHeadlessMessage() {
	$init(GraphicsEnvironment);
	if (GraphicsEnvironment::headless == nullptr) {
		getHeadlessProperty();
	}
	$init($Boolean);
	return GraphicsEnvironment::defaultHeadless != $Boolean::TRUE ? ($String*)nullptr : $PlatformGraphicsInfo::getDefaultHeadlessMessage();
}

bool GraphicsEnvironment::getHeadlessProperty() {
	$load(GraphicsEnvironment);
	$beforeCallerSensitive();
	$init(GraphicsEnvironment);
	if (GraphicsEnvironment::headless == nullptr) {
		$AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new(GraphicsEnvironment$$Lambda$lambda$getHeadlessProperty$0)));
	}
	return $nc(GraphicsEnvironment::headless)->booleanValue();
}

void GraphicsEnvironment::checkHeadless() {
	if (isHeadless()) {
		$throwNew($HeadlessException);
	}
}

bool GraphicsEnvironment::isHeadlessInstance() {
	return getHeadlessProperty();
}

bool GraphicsEnvironment::registerFont($Font* font) {
	if (font == nullptr) {
		$throwNew($NullPointerException, "font cannot be null."_s);
	}
	$var($FontManager, fm, $FontManagerFactory::getInstance());
	return $nc(fm)->registerFont(font);
}

void GraphicsEnvironment::preferLocaleFonts() {
	$var($FontManager, fm, $FontManagerFactory::getInstance());
	$nc(fm)->preferLocaleFonts();
}

void GraphicsEnvironment::preferProportionalFonts() {
	$var($FontManager, fm, $FontManagerFactory::getInstance());
	$nc(fm)->preferProportionalFonts();
}

$Point* GraphicsEnvironment::getCenterPoint() {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle, usableBounds, $SunGraphicsEnvironment::getUsableBounds($(getDefaultScreenDevice())));
	return $new($Point, ($nc(usableBounds)->width / 2) + usableBounds->x, (usableBounds->height / 2) + usableBounds->y);
}

$Rectangle* GraphicsEnvironment::getMaximumWindowBounds() {
	return $SunGraphicsEnvironment::getUsableBounds($(getDefaultScreenDevice()));
}

$Void* GraphicsEnvironment::lambda$getHeadlessProperty$0() {
	$var($String, nm, $System::getProperty("java.awt.headless"_s));
	if (nm == nullptr) {
		$init(GraphicsEnvironment);
		$assignStatic(GraphicsEnvironment::headless, ($assignStatic(GraphicsEnvironment::defaultHeadless, $Boolean::valueOf($PlatformGraphicsInfo::getDefaultHeadlessProperty()))));
	} else {
		$init(GraphicsEnvironment);
		$assignStatic(GraphicsEnvironment::headless, $Boolean::valueOf(nm));
	}
	return nullptr;
}

GraphicsEnvironment::GraphicsEnvironment() {
}

$Class* GraphicsEnvironment::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(GraphicsEnvironment$$Lambda$lambda$getHeadlessProperty$0::classInfo$.name)) {
			return GraphicsEnvironment$$Lambda$lambda$getHeadlessProperty$0::load$(name, initialize);
		}
	}
	$loadClass(GraphicsEnvironment, name, initialize, &_GraphicsEnvironment_ClassInfo_, allocate$GraphicsEnvironment);
	return class$;
}

$Class* GraphicsEnvironment::class$ = nullptr;

	} // awt
} // java
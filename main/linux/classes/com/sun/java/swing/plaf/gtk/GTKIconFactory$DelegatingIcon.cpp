#include <com/sun/java/swing/plaf/gtk/GTKIconFactory$DelegatingIcon.h>

#include <com/sun/java/swing/plaf/gtk/GTKIconFactory.h>
#include <com/sun/java/swing/plaf/gtk/GTKLookAndFeel.h>
#include <com/sun/java/swing/plaf/gtk/GTKPainter.h>
#include <com/sun/java/swing/plaf/gtk/GTKStyle.h>
#include <java/awt/Font.h>
#include <java/awt/Graphics.h>
#include <java/lang/AssertionError.h>
#include <java/lang/NoSuchMethodException.h>
#include <java/lang/Number.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/plaf/UIResource.h>
#include <javax/swing/plaf/synth/Region.h>
#include <javax/swing/plaf/synth/SynthContext.h>
#include <javax/swing/plaf/synth/SynthStyle.h>
#include <jcpp.h>

#undef CHECK_BOX
#undef CHECK_BOX_MENU_ITEM
#undef INSTANCE
#undef MENU
#undef PARAM_TYPES
#undef RADIO_BUTTON
#undef RADIO_BUTTON_MENU_ITEM
#undef TYPE

using $GTKIconFactory = ::com::sun::java::swing::plaf::gtk::GTKIconFactory;
using $GTKLookAndFeel = ::com::sun::java::swing::plaf::gtk::GTKLookAndFeel;
using $GTKPainter = ::com::sun::java::swing::plaf::gtk::GTKPainter;
using $GTKStyle = ::com::sun::java::swing::plaf::gtk::GTKStyle;
using $Font = ::java::awt::Font;
using $Graphics = ::java::awt::Graphics;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoSuchMethodException = ::java::lang::NoSuchMethodException;
using $Number = ::java::lang::Number;
using $Method = ::java::lang::reflect::Method;
using $UIResource = ::javax::swing::plaf::UIResource;
using $Region = ::javax::swing::plaf::synth::Region;
using $SynthContext = ::javax::swing::plaf::synth::SynthContext;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace gtk {

$FieldInfo _GTKIconFactory$DelegatingIcon_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(GTKIconFactory$DelegatingIcon, $assertionsDisabled)},
	{"PARAM_TYPES", "[Ljava/lang/Class;", "[Ljava/lang/Class<*>;", $PRIVATE | $STATIC | $FINAL, $staticField(GTKIconFactory$DelegatingIcon, PARAM_TYPES)},
	{"method", "Ljava/lang/Object;", nullptr, $PRIVATE, $field(GTKIconFactory$DelegatingIcon, method)},
	{"iconDimension", "I", nullptr, 0, $field(GTKIconFactory$DelegatingIcon, iconDimension)},
	{}
};

$MethodInfo _GTKIconFactory$DelegatingIcon_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(GTKIconFactory$DelegatingIcon::*)($String*)>(&GTKIconFactory$DelegatingIcon::init$))},
	{"getIconDimension", "(Ljavax/swing/plaf/synth/SynthContext;)I", nullptr, 0},
	{"getIconHeight", "(Ljavax/swing/plaf/synth/SynthContext;)I", nullptr, $PUBLIC},
	{"getIconWidth", "(Ljavax/swing/plaf/synth/SynthContext;)I", nullptr, $PUBLIC},
	{"getMethod", "()Ljava/lang/reflect/Method;", nullptr, $PROTECTED},
	{"getMethodParamTypes", "()[Ljava/lang/Class;", "()[Ljava/lang/Class<*>;", $PROTECTED},
	{"paintIcon", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"resetIconDimensions", "()V", nullptr, 0},
	{"resolveMethod", "(Ljava/lang/String;)Ljava/lang/reflect/Method;", nullptr, $PRIVATE, $method(static_cast<$Method*(GTKIconFactory$DelegatingIcon::*)($String*)>(&GTKIconFactory$DelegatingIcon::resolveMethod))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _GTKIconFactory$DelegatingIcon_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.gtk.GTKIconFactory$DelegatingIcon", "com.sun.java.swing.plaf.gtk.GTKIconFactory", "DelegatingIcon", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _GTKIconFactory$DelegatingIcon_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.java.swing.plaf.gtk.GTKIconFactory$DelegatingIcon",
	"java.lang.Object",
	"javax.swing.plaf.UIResource,javax.swing.plaf.synth.SynthIcon",
	_GTKIconFactory$DelegatingIcon_FieldInfo_,
	_GTKIconFactory$DelegatingIcon_MethodInfo_,
	nullptr,
	nullptr,
	_GTKIconFactory$DelegatingIcon_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.gtk.GTKIconFactory"
};

$Object* allocate$GTKIconFactory$DelegatingIcon($Class* clazz) {
	return $of($alloc(GTKIconFactory$DelegatingIcon));
}

int32_t GTKIconFactory$DelegatingIcon::hashCode() {
	 return this->$UIResource::hashCode();
}

bool GTKIconFactory$DelegatingIcon::equals(Object$* arg0) {
	 return this->$UIResource::equals(arg0);
}

$Object* GTKIconFactory$DelegatingIcon::clone() {
	 return this->$UIResource::clone();
}

$String* GTKIconFactory$DelegatingIcon::toString() {
	 return this->$UIResource::toString();
}

void GTKIconFactory$DelegatingIcon::finalize() {
	this->$UIResource::finalize();
}

bool GTKIconFactory$DelegatingIcon::$assertionsDisabled = false;
$ClassArray* GTKIconFactory$DelegatingIcon::PARAM_TYPES = nullptr;

void GTKIconFactory$DelegatingIcon::init$($String* methodName) {
	this->iconDimension = -1;
	$set(this, method, methodName);
}

void GTKIconFactory$DelegatingIcon::paintIcon($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	if (context != nullptr) {
		$init($GTKPainter);
		$nc($GTKPainter::INSTANCE)->paintIcon(context, g, $(getMethod()), x, y, w, h);
	}
}

int32_t GTKIconFactory$DelegatingIcon::getIconWidth($SynthContext* context) {
	return getIconDimension(context);
}

int32_t GTKIconFactory$DelegatingIcon::getIconHeight($SynthContext* context) {
	return getIconDimension(context);
}

void GTKIconFactory$DelegatingIcon::resetIconDimensions() {
	this->iconDimension = -1;
}

$Method* GTKIconFactory$DelegatingIcon::getMethod() {
	if ($instanceOf($String, this->method)) {
		$set(this, method, resolveMethod($cast($String, this->method)));
	}
	return $cast($Method, this->method);
}

$ClassArray* GTKIconFactory$DelegatingIcon::getMethodParamTypes() {
	return GTKIconFactory$DelegatingIcon::PARAM_TYPES;
}

$Method* GTKIconFactory$DelegatingIcon::resolveMethod($String* name) {
	$beforeCallerSensitive();
	try {
		$load($GTKPainter);
		return $GTKPainter::class$->getMethod(name, $(getMethodParamTypes()));
	} catch ($NoSuchMethodException& e) {
		if (!GTKIconFactory$DelegatingIcon::$assertionsDisabled) {
			$throwNew($AssertionError);
		}
	}
	return nullptr;
}

int32_t GTKIconFactory$DelegatingIcon::getIconDimension($SynthContext* context) {
	$useLocalCurrentObjectStackCache();
	if (this->iconDimension >= 0) {
		return this->iconDimension;
	}
	if (context == nullptr) {
		return 13;
	}
	$var($Region, region, $nc(context)->getRegion());
	$var($GTKStyle, style, $cast($GTKStyle, context->getStyle()));
	$init($Region);
	if ($GTKLookAndFeel::is3() && region == $Region::MENU) {
		$var($Object, value, $nc(style)->getClassSpecificValue("arrow-scaling"_s));
		if ($instanceOf($Number, value)) {
			float var$0 = $nc(($cast($Number, value)))->floatValue();
			float var$2 = $nc($(style->getFont(context)))->getSize2D();
			float var$1 = (var$2 + 2 * style->getClassSpecificIntValue(context, "indicator-spacing"_s, 2));
			this->iconDimension = $cast(int32_t, (var$0 * var$1));
			if (this->iconDimension > 0) {
				return this->iconDimension;
			}
		}
	}
	this->iconDimension = $nc(style)->getClassSpecificIntValue(context, "indicator-size"_s, (region == $Region::CHECK_BOX_MENU_ITEM || region == $Region::RADIO_BUTTON_MENU_ITEM) ? 12 : 13);
	if (region == $Region::CHECK_BOX || region == $Region::RADIO_BUTTON) {
		this->iconDimension += 2 * style->getClassSpecificIntValue(context, "indicator-spacing"_s, 2);
	} else {
		if (region == $Region::CHECK_BOX_MENU_ITEM || region == $Region::RADIO_BUTTON_MENU_ITEM) {
			this->iconDimension += 2 * 1;
		}
	}
	return this->iconDimension;
}

void clinit$GTKIconFactory$DelegatingIcon($Class* class$) {
	$load($GTKIconFactory);
	GTKIconFactory$DelegatingIcon::$assertionsDisabled = !$GTKIconFactory::class$->desiredAssertionStatus();
	$load($SynthContext);
	$load($Graphics);
	$init($Integer);
	$assignStatic(GTKIconFactory$DelegatingIcon::PARAM_TYPES, $new($ClassArray, {
		$SynthContext::class$,
		$Graphics::class$,
		$Integer::TYPE,
		$Integer::TYPE,
		$Integer::TYPE,
		$Integer::TYPE,
		$Integer::TYPE
	}));
}

GTKIconFactory$DelegatingIcon::GTKIconFactory$DelegatingIcon() {
}

$Class* GTKIconFactory$DelegatingIcon::load$($String* name, bool initialize) {
	$loadClass(GTKIconFactory$DelegatingIcon, name, initialize, &_GTKIconFactory$DelegatingIcon_ClassInfo_, clinit$GTKIconFactory$DelegatingIcon, allocate$GTKIconFactory$DelegatingIcon);
	return class$;
}

$Class* GTKIconFactory$DelegatingIcon::class$ = nullptr;

					} // gtk
				} // plaf
			} // swing
		} // java
	} // sun
} // com
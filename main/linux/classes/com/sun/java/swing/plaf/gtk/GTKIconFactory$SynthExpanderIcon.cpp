#include <com/sun/java/swing/plaf/gtk/GTKIconFactory$SynthExpanderIcon.h>

#include <com/sun/java/swing/plaf/gtk/GTKIconFactory$DelegatingIcon.h>
#include <com/sun/java/swing/plaf/gtk/GTKIconFactory.h>
#include <java/awt/Graphics.h>
#include <javax/swing/plaf/synth/SynthContext.h>
#include <javax/swing/plaf/synth/SynthStyle.h>
#include <jcpp.h>

using $GTKIconFactory$DelegatingIcon = ::com::sun::java::swing::plaf::gtk::GTKIconFactory$DelegatingIcon;
using $Graphics = ::java::awt::Graphics;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SynthContext = ::javax::swing::plaf::synth::SynthContext;
using $SynthStyle = ::javax::swing::plaf::synth::SynthStyle;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace gtk {

$MethodInfo _GTKIconFactory$SynthExpanderIcon_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(GTKIconFactory$SynthExpanderIcon::*)($String*)>(&GTKIconFactory$SynthExpanderIcon::init$))},
	{"getIconDimension", "(Ljavax/swing/plaf/synth/SynthContext;)I", nullptr, 0},
	{"paintIcon", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"updateSizeIfNecessary", "(Ljavax/swing/plaf/synth/SynthContext;)V", nullptr, $PRIVATE, $method(static_cast<void(GTKIconFactory$SynthExpanderIcon::*)($SynthContext*)>(&GTKIconFactory$SynthExpanderIcon::updateSizeIfNecessary))},
	{}
};

$InnerClassInfo _GTKIconFactory$SynthExpanderIcon_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.gtk.GTKIconFactory$SynthExpanderIcon", "com.sun.java.swing.plaf.gtk.GTKIconFactory", "SynthExpanderIcon", $PRIVATE | $STATIC},
	{"com.sun.java.swing.plaf.gtk.GTKIconFactory$DelegatingIcon", "com.sun.java.swing.plaf.gtk.GTKIconFactory", "DelegatingIcon", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _GTKIconFactory$SynthExpanderIcon_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.java.swing.plaf.gtk.GTKIconFactory$SynthExpanderIcon",
	"com.sun.java.swing.plaf.gtk.GTKIconFactory$DelegatingIcon",
	nullptr,
	nullptr,
	_GTKIconFactory$SynthExpanderIcon_MethodInfo_,
	nullptr,
	nullptr,
	_GTKIconFactory$SynthExpanderIcon_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.gtk.GTKIconFactory"
};

$Object* allocate$GTKIconFactory$SynthExpanderIcon($Class* clazz) {
	return $of($alloc(GTKIconFactory$SynthExpanderIcon));
}

void GTKIconFactory$SynthExpanderIcon::init$($String* method) {
	$GTKIconFactory$DelegatingIcon::init$(method);
}

void GTKIconFactory$SynthExpanderIcon::paintIcon($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	if (context != nullptr) {
		$GTKIconFactory$DelegatingIcon::paintIcon(context, g, x, y, w, h);
		updateSizeIfNecessary(context);
	}
}

int32_t GTKIconFactory$SynthExpanderIcon::getIconDimension($SynthContext* context) {
	updateSizeIfNecessary(context);
	return (this->iconDimension == -1) ? 13 : this->iconDimension;
}

void GTKIconFactory$SynthExpanderIcon::updateSizeIfNecessary($SynthContext* context) {
	if (this->iconDimension == -1 && context != nullptr) {
		this->iconDimension = $nc($(context->getStyle()))->getInt(context, "Tree.expanderSize"_s, 10);
	}
}

GTKIconFactory$SynthExpanderIcon::GTKIconFactory$SynthExpanderIcon() {
}

$Class* GTKIconFactory$SynthExpanderIcon::load$($String* name, bool initialize) {
	$loadClass(GTKIconFactory$SynthExpanderIcon, name, initialize, &_GTKIconFactory$SynthExpanderIcon_ClassInfo_, allocate$GTKIconFactory$SynthExpanderIcon);
	return class$;
}

$Class* GTKIconFactory$SynthExpanderIcon::class$ = nullptr;

					} // gtk
				} // plaf
			} // swing
		} // java
	} // sun
} // com
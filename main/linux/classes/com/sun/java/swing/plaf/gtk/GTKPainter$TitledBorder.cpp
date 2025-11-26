#include <com/sun/java/swing/plaf/gtk/GTKPainter$TitledBorder.h>

#include <com/sun/java/swing/plaf/gtk/GTKConstants$ShadowType.h>
#include <com/sun/java/swing/plaf/gtk/GTKEngine$CustomRegion.h>
#include <com/sun/java/swing/plaf/gtk/GTKEngine.h>
#include <com/sun/java/swing/plaf/gtk/GTKLookAndFeel.h>
#include <com/sun/java/swing/plaf/gtk/GTKPainter.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <java/awt/Insets.h>
#include <java/awt/image/BufferedImage.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/border/AbstractBorder.h>
#include <javax/swing/plaf/synth/Region.h>
#include <javax/swing/plaf/synth/SynthConstants.h>
#include <javax/swing/plaf/synth/SynthContext.h>
#include <javax/swing/plaf/synth/SynthLookAndFeel.h>
#include <javax/swing/plaf/synth/SynthStyle.h>
#include <sun/awt/UNIXToolkit.h>
#include <jcpp.h>

#undef DEFAULT
#undef ENGINE
#undef ETCHED_IN
#undef GTK_LOCK
#undef TITLED_BORDER

using $GTKConstants$ShadowType = ::com::sun::java::swing::plaf::gtk::GTKConstants$ShadowType;
using $GTKEngine = ::com::sun::java::swing::plaf::gtk::GTKEngine;
using $GTKEngine$CustomRegion = ::com::sun::java::swing::plaf::gtk::GTKEngine$CustomRegion;
using $GTKLookAndFeel = ::com::sun::java::swing::plaf::gtk::GTKLookAndFeel;
using $GTKPainter = ::com::sun::java::swing::plaf::gtk::GTKPainter;
using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $Insets = ::java::awt::Insets;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $AbstractBorder = ::javax::swing::border::AbstractBorder;
using $UIResource = ::javax::swing::plaf::UIResource;
using $Region = ::javax::swing::plaf::synth::Region;
using $SynthConstants = ::javax::swing::plaf::synth::SynthConstants;
using $SynthContext = ::javax::swing::plaf::synth::SynthContext;
using $SynthLookAndFeel = ::javax::swing::plaf::synth::SynthLookAndFeel;
using $SynthStyle = ::javax::swing::plaf::synth::SynthStyle;
using $UNIXToolkit = ::sun::awt::UNIXToolkit;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace gtk {

$MethodInfo _GTKPainter$TitledBorder_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(GTKPainter$TitledBorder::*)()>(&GTKPainter$TitledBorder::init$))},
	{"getBorderInsets", "(Ljava/awt/Component;Ljava/awt/Insets;)Ljava/awt/Insets;", nullptr, $PUBLIC},
	{"getContext", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/synth/SynthContext;", nullptr, $PRIVATE, $method(static_cast<$SynthContext*(GTKPainter$TitledBorder::*)($JComponent*)>(&GTKPainter$TitledBorder::getContext))},
	{"getStyle", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/synth/SynthStyle;", nullptr, $PRIVATE, $method(static_cast<$SynthStyle*(GTKPainter$TitledBorder::*)($JComponent*)>(&GTKPainter$TitledBorder::getStyle))},
	{"isBorderOpaque", "()Z", nullptr, $PUBLIC},
	{"paintBorder", "(Ljava/awt/Component;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _GTKPainter$TitledBorder_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.gtk.GTKPainter$TitledBorder", "com.sun.java.swing.plaf.gtk.GTKPainter", "TitledBorder", $STATIC},
	{}
};

$ClassInfo _GTKPainter$TitledBorder_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.java.swing.plaf.gtk.GTKPainter$TitledBorder",
	"javax.swing.border.AbstractBorder",
	"javax.swing.plaf.UIResource",
	nullptr,
	_GTKPainter$TitledBorder_MethodInfo_,
	nullptr,
	nullptr,
	_GTKPainter$TitledBorder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.gtk.GTKPainter"
};

$Object* allocate$GTKPainter$TitledBorder($Class* clazz) {
	return $of($alloc(GTKPainter$TitledBorder));
}

int32_t GTKPainter$TitledBorder::hashCode() {
	 return this->$AbstractBorder::hashCode();
}

bool GTKPainter$TitledBorder::equals(Object$* arg0) {
	 return this->$AbstractBorder::equals(arg0);
}

$Object* GTKPainter$TitledBorder::clone() {
	 return this->$AbstractBorder::clone();
}

$String* GTKPainter$TitledBorder::toString() {
	 return this->$AbstractBorder::toString();
}

void GTKPainter$TitledBorder::finalize() {
	this->$AbstractBorder::finalize();
}

void GTKPainter$TitledBorder::init$() {
	$AbstractBorder::init$();
}

void GTKPainter$TitledBorder::paintBorder($Component* c, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	$var($SynthContext, context, getContext($cast($JComponent, c)));
	$var($Region, id, $nc(context)->getRegion());
	int32_t state = context->getComponentState();
	int32_t gtkState = $GTKLookAndFeel::synthStateToGTKState(id, state);
	$init($UNIXToolkit);
	$synchronized($UNIXToolkit::GTK_LOCK) {
		$init($GTKPainter);
		if (!$nc($GTKPainter::ENGINE)->paintCachedImage(g, x, y, w, h, $$new($ObjectArray, {$of(id)}))) {
			$nc($GTKPainter::ENGINE)->startPainting(g, x, y, w, h, $$new($ObjectArray, {$of(id)}));
			$init($GTKConstants$ShadowType);
			$nc($GTKPainter::ENGINE)->paintShadow(g, context, id, gtkState, $GTKConstants$ShadowType::ETCHED_IN, "frame"_s, x, y, w, h);
			$nc($GTKPainter::ENGINE)->finishPainting();
		}
	}
}

$Insets* GTKPainter$TitledBorder::getBorderInsets($Component* c, $Insets* i) {
	$useLocalCurrentObjectStackCache();
	$var($SynthContext, context, getContext($cast($JComponent, c)));
	return $nc($($nc(context)->getStyle()))->getInsets(context, i);
}

bool GTKPainter$TitledBorder::isBorderOpaque() {
	return true;
}

$SynthStyle* GTKPainter$TitledBorder::getStyle($JComponent* c) {
	$init($GTKEngine$CustomRegion);
	return $SynthLookAndFeel::getStyle(c, $GTKEngine$CustomRegion::TITLED_BORDER);
}

$SynthContext* GTKPainter$TitledBorder::getContext($JComponent* c) {
	int32_t state = $SynthConstants::DEFAULT;
	$init($GTKEngine$CustomRegion);
	return $new($SynthContext, c, $GTKEngine$CustomRegion::TITLED_BORDER, $(getStyle(c)), state);
}

GTKPainter$TitledBorder::GTKPainter$TitledBorder() {
}

$Class* GTKPainter$TitledBorder::load$($String* name, bool initialize) {
	$loadClass(GTKPainter$TitledBorder, name, initialize, &_GTKPainter$TitledBorder_ClassInfo_, allocate$GTKPainter$TitledBorder);
	return class$;
}

$Class* GTKPainter$TitledBorder::class$ = nullptr;

					} // gtk
				} // plaf
			} // swing
		} // java
	} // sun
} // com
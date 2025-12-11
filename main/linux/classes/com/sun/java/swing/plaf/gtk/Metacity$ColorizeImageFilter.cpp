#include <com/sun/java/swing/plaf/gtk/Metacity$ColorizeImageFilter.h>

#include <com/sun/java/swing/plaf/gtk/Metacity.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Image.h>
#include <java/awt/image/FilteredImageSource.h>
#include <java/awt/image/ImageFilter.h>
#include <java/awt/image/ImageProducer.h>
#include <java/awt/image/RGBImageFilter.h>
#include <javax/swing/ImageIcon.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/plaf/synth/SynthContext.h>
#include <jcpp.h>

using $Metacity = ::com::sun::java::swing::plaf::gtk::Metacity;
using $Color = ::java::awt::Color;
using $Image = ::java::awt::Image;
using $FilteredImageSource = ::java::awt::image::FilteredImageSource;
using $ImageFilter = ::java::awt::image::ImageFilter;
using $ImageProducer = ::java::awt::image::ImageProducer;
using $RGBImageFilter = ::java::awt::image::RGBImageFilter;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ImageIcon = ::javax::swing::ImageIcon;
using $JComponent = ::javax::swing::JComponent;
using $SynthContext = ::javax::swing::plaf::synth::SynthContext;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace gtk {

$FieldInfo _Metacity$ColorizeImageFilter_FieldInfo_[] = {
	{"this$0", "Lcom/sun/java/swing/plaf/gtk/Metacity;", nullptr, $FINAL | $SYNTHETIC, $field(Metacity$ColorizeImageFilter, this$0)},
	{"cr", "D", nullptr, 0, $field(Metacity$ColorizeImageFilter, cr)},
	{"cg", "D", nullptr, 0, $field(Metacity$ColorizeImageFilter, cg)},
	{"cb", "D", nullptr, 0, $field(Metacity$ColorizeImageFilter, cb)},
	{}
};

$MethodInfo _Metacity$ColorizeImageFilter_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/java/swing/plaf/gtk/Metacity;)V", nullptr, $PUBLIC, $method(static_cast<void(Metacity$ColorizeImageFilter::*)($Metacity*)>(&Metacity$ColorizeImageFilter::init$))},
	{"colorize", "(Ljava/awt/Image;Ljava/awt/Color;)Ljava/awt/Image;", nullptr, $PUBLIC},
	{"filterRGB", "(III)I", nullptr, $PUBLIC},
	{"setColor", "(Ljava/awt/Color;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Metacity$ColorizeImageFilter_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.gtk.Metacity$ColorizeImageFilter", "com.sun.java.swing.plaf.gtk.Metacity", "ColorizeImageFilter", $PRIVATE},
	{}
};

$ClassInfo _Metacity$ColorizeImageFilter_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.java.swing.plaf.gtk.Metacity$ColorizeImageFilter",
	"java.awt.image.RGBImageFilter",
	nullptr,
	_Metacity$ColorizeImageFilter_FieldInfo_,
	_Metacity$ColorizeImageFilter_MethodInfo_,
	nullptr,
	nullptr,
	_Metacity$ColorizeImageFilter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.gtk.Metacity"
};

$Object* allocate$Metacity$ColorizeImageFilter($Class* clazz) {
	return $of($alloc(Metacity$ColorizeImageFilter));
}

void Metacity$ColorizeImageFilter::init$($Metacity* this$0) {
	$set(this, this$0, this$0);
	$RGBImageFilter::init$();
	this->canFilterIndexColorModel = true;
}

void Metacity$ColorizeImageFilter::setColor($Color* color) {
	this->cr = $nc(color)->getRed() / 255.0;
	this->cg = color->getGreen() / 255.0;
	this->cb = color->getBlue() / 255.0;
}

$Image* Metacity$ColorizeImageFilter::colorize($Image* fromImage, $Color* c) {
	$useLocalCurrentObjectStackCache();
	setColor(c);
	$var($ImageProducer, producer, $new($FilteredImageSource, $($nc(fromImage)->getSource()), this));
	return $$new($ImageIcon, $($nc($($nc(this->this$0->context)->getComponent()))->createImage(producer)))->getImage();
}

int32_t Metacity$ColorizeImageFilter::filterRGB(int32_t x, int32_t y, int32_t rgb) {
	double grayLevel = 2 * ((int32_t)(rgb & (uint32_t)255)) / 255.0;
	double r = 0.0;
	double g = 0.0;
	double b = 0.0;
	if (grayLevel <= 1.0) {
		r = this->cr * grayLevel;
		g = this->cg * grayLevel;
		b = this->cb * grayLevel;
	} else {
		grayLevel -= 1.0;
		r = this->cr + (1.0 - this->cr) * grayLevel;
		g = this->cg + (1.0 - this->cg) * grayLevel;
		b = this->cb + (1.0 - this->cb) * grayLevel;
	}
	return (((int32_t)(rgb & (uint32_t)(int32_t)0xFF000000)) + (($cast(int32_t, (r * 255))) << 16) + (($cast(int32_t, (g * 255))) << 8) + $cast(int32_t, (b * 255)));
}

Metacity$ColorizeImageFilter::Metacity$ColorizeImageFilter() {
}

$Class* Metacity$ColorizeImageFilter::load$($String* name, bool initialize) {
	$loadClass(Metacity$ColorizeImageFilter, name, initialize, &_Metacity$ColorizeImageFilter_ClassInfo_, allocate$Metacity$ColorizeImageFilter);
	return class$;
}

$Class* Metacity$ColorizeImageFilter::class$ = nullptr;

					} // gtk
				} // plaf
			} // swing
		} // java
	} // sun
} // com
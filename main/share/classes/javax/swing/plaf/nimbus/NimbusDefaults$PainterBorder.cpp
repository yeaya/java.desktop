#include <javax/swing/plaf/nimbus/NimbusDefaults$PainterBorder.h>

#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/Image.h>
#include <java/awt/Insets.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/ImageObserver.h>
#include <javax/swing/Painter.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/plaf/nimbus/NimbusDefaults.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $Graphics2D = ::java::awt::Graphics2D;
using $Image = ::java::awt::Image;
using $Insets = ::java::awt::Insets;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $ImageObserver = ::java::awt::image::ImageObserver;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Painter = ::javax::swing::Painter;
using $UIManager = ::javax::swing::UIManager;
using $Border = ::javax::swing::border::Border;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace nimbus {

$FieldInfo _NimbusDefaults$PainterBorder_FieldInfo_[] = {
	{"insets", "Ljava/awt/Insets;", nullptr, $PRIVATE, $field(NimbusDefaults$PainterBorder, insets)},
	{"painter", "Ljavax/swing/Painter;", "Ljavax/swing/Painter<Ljava/awt/Component;>;", $PRIVATE, $field(NimbusDefaults$PainterBorder, painter)},
	{"painterKey", "Ljava/lang/String;", nullptr, $PRIVATE, $field(NimbusDefaults$PainterBorder, painterKey)},
	{}
};

$MethodInfo _NimbusDefaults$PainterBorder_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/lang/String;Ljava/awt/Insets;)V", nullptr, 0, $method(static_cast<void(NimbusDefaults$PainterBorder::*)($String*,$Insets*)>(&NimbusDefaults$PainterBorder::init$))},
	{"getBorderInsets", "(Ljava/awt/Component;)Ljava/awt/Insets;", nullptr, $PUBLIC},
	{"isBorderOpaque", "()Z", nullptr, $PUBLIC},
	{"paintBorder", "(Ljava/awt/Component;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _NimbusDefaults$PainterBorder_InnerClassesInfo_[] = {
	{"javax.swing.plaf.nimbus.NimbusDefaults$PainterBorder", "javax.swing.plaf.nimbus.NimbusDefaults", "PainterBorder", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _NimbusDefaults$PainterBorder_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"javax.swing.plaf.nimbus.NimbusDefaults$PainterBorder",
	"java.lang.Object",
	"javax.swing.border.Border,javax.swing.plaf.UIResource",
	_NimbusDefaults$PainterBorder_FieldInfo_,
	_NimbusDefaults$PainterBorder_MethodInfo_,
	nullptr,
	nullptr,
	_NimbusDefaults$PainterBorder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.nimbus.NimbusDefaults"
};

$Object* allocate$NimbusDefaults$PainterBorder($Class* clazz) {
	return $of($alloc(NimbusDefaults$PainterBorder));
}

int32_t NimbusDefaults$PainterBorder::hashCode() {
	 return this->$Border::hashCode();
}

bool NimbusDefaults$PainterBorder::equals(Object$* arg0) {
	 return this->$Border::equals(arg0);
}

$Object* NimbusDefaults$PainterBorder::clone() {
	 return this->$Border::clone();
}

$String* NimbusDefaults$PainterBorder::toString() {
	 return this->$Border::toString();
}

void NimbusDefaults$PainterBorder::finalize() {
	this->$Border::finalize();
}

void NimbusDefaults$PainterBorder::init$($String* painterKey, $Insets* insets) {
	$set(this, insets, insets);
	$set(this, painterKey, painterKey);
}

void NimbusDefaults$PainterBorder::paintBorder($Component* c, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	if (this->painter == nullptr) {
		$var($Painter, temp, $cast($Painter, $UIManager::get(this->painterKey)));
		$set(this, painter, temp);
		if (this->painter == nullptr) {
			return;
		}
	}
	$nc(g)->translate(x, y);
	if ($instanceOf($Graphics2D, g)) {
		$nc(this->painter)->paint($cast($Graphics2D, g), c, w, h);
	} else {
		$var($BufferedImage, img, $new($BufferedImage, w, h, 2));
		$var($Graphics2D, gfx, img->createGraphics());
		$nc(this->painter)->paint(gfx, c, w, h);
		$nc(gfx)->dispose();
		g->drawImage(img, x, y, nullptr);
		$assign(img, nullptr);
	}
	g->translate(-x, -y);
}

$Insets* NimbusDefaults$PainterBorder::getBorderInsets($Component* c) {
	return $cast($Insets, $nc(this->insets)->clone());
}

bool NimbusDefaults$PainterBorder::isBorderOpaque() {
	return false;
}

NimbusDefaults$PainterBorder::NimbusDefaults$PainterBorder() {
}

$Class* NimbusDefaults$PainterBorder::load$($String* name, bool initialize) {
	$loadClass(NimbusDefaults$PainterBorder, name, initialize, &_NimbusDefaults$PainterBorder_ClassInfo_, allocate$NimbusDefaults$PainterBorder);
	return class$;
}

$Class* NimbusDefaults$PainterBorder::class$ = nullptr;

			} // nimbus
		} // plaf
	} // swing
} // javax
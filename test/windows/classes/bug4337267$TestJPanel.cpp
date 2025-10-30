#include <bug4337267$TestJPanel.h>

#include <bug4337267$TestBufferedImage.h>
#include <bug4337267.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Graphics.h>
#include <java/awt/Image.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/ImageObserver.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JPanel.h>
#include <jcpp.h>

#undef TYPE_INT_ARGB

using $bug4337267 = ::bug4337267;
using $bug4337267$TestBufferedImage = ::bug4337267$TestBufferedImage;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Graphics = ::java::awt::Graphics;
using $Image = ::java::awt::Image;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $ImageObserver = ::java::awt::image::ImageObserver;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JPanel = ::javax::swing::JPanel;

$FieldInfo _bug4337267$TestJPanel_FieldInfo_[] = {
	{"image", "Lbug4337267$TestBufferedImage;", nullptr, 0, $field(bug4337267$TestJPanel, image)},
	{}
};

$MethodInfo _bug4337267$TestJPanel_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug4337267$TestJPanel::*)()>(&bug4337267$TestJPanel::init$))},
	{"createImage", "(Ljava/awt/Dimension;)Lbug4337267$TestBufferedImage;", nullptr, 0},
	{"paint", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"setPreferredSize", "(Ljava/awt/Dimension;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _bug4337267$TestJPanel_InnerClassesInfo_[] = {
	{"bug4337267$TestJPanel", "bug4337267", "TestJPanel", $STATIC},
	{}
};

$ClassInfo _bug4337267$TestJPanel_ClassInfo_ = {
	$ACC_SUPER,
	"bug4337267$TestJPanel",
	"javax.swing.JPanel",
	nullptr,
	_bug4337267$TestJPanel_FieldInfo_,
	_bug4337267$TestJPanel_MethodInfo_,
	nullptr,
	nullptr,
	_bug4337267$TestJPanel_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug4337267"
};

$Object* allocate$bug4337267$TestJPanel($Class* clazz) {
	return $of($alloc(bug4337267$TestJPanel));
}

void bug4337267$TestJPanel::init$() {
	$JPanel::init$();
	$set(this, image, createImage($$new($Dimension, 1, 1)));
}

$bug4337267$TestBufferedImage* bug4337267$TestJPanel::createImage($Dimension* d) {
	return $new($bug4337267$TestBufferedImage, $nc(d)->width, d->height, $BufferedImage::TYPE_INT_ARGB);
}

void bug4337267$TestJPanel::setPreferredSize($Dimension* size) {
	$JPanel::setPreferredSize(size);
	$set(this, image, createImage(size));
}

void bug4337267$TestJPanel::paint($Graphics* g) {
	$var($Graphics, g0, $nc(this->image)->getGraphics());
	$JPanel::paint(g0);
	$nc(g)->drawImage(this->image, 0, 0, this);
}

bug4337267$TestJPanel::bug4337267$TestJPanel() {
}

$Class* bug4337267$TestJPanel::load$($String* name, bool initialize) {
	$loadClass(bug4337267$TestJPanel, name, initialize, &_bug4337267$TestJPanel_ClassInfo_, allocate$bug4337267$TestJPanel);
	return class$;
}

$Class* bug4337267$TestJPanel::class$ = nullptr;
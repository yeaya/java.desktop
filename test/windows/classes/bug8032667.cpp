#include <bug8032667.h>

#include <bug8032667$1.h>
#include <java/awt/Component.h>
#include <java/awt/Dimension.h>
#include <java/awt/Graphics.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/Image.h>
#include <java/awt/image/BufferedImage.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/JApplet.h>
#include <javax/swing/JCheckBox.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

#undef TYPE_INT_ARGB

using $bug8032667$1 = ::bug8032667$1;
using $Component = ::java::awt::Component;
using $Dimension = ::java::awt::Dimension;
using $Graphics = ::java::awt::Graphics;
using $Graphics2D = ::java::awt::Graphics2D;
using $Image = ::java::awt::Image;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $AbstractButton = ::javax::swing::AbstractButton;
using $JApplet = ::javax::swing::JApplet;
using $JCheckBox = ::javax::swing::JCheckBox;
using $JComponent = ::javax::swing::JComponent;
using $SwingUtilities = ::javax::swing::SwingUtilities;

$FieldInfo _bug8032667_FieldInfo_[] = {
	{"scale", "I", nullptr, $STATIC | $FINAL, $constField(bug8032667, scale)},
	{"width", "I", nullptr, $STATIC | $FINAL, $constField(bug8032667, width)},
	{"height", "I", nullptr, $STATIC | $FINAL, $constField(bug8032667, height)},
	{"scaledWidth", "I", nullptr, $STATIC | $FINAL, $constField(bug8032667, scaledWidth)},
	{"scaledHeight", "I", nullptr, $STATIC | $FINAL, $constField(bug8032667, scaledHeight)},
	{}
};

$MethodInfo _bug8032667_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug8032667::*)()>(&bug8032667::init$))},
	{"getCheckBox", "(Ljava/lang/String;Z)Ljavax/swing/JCheckBox;", nullptr, $STATIC, $method(static_cast<$JCheckBox*(*)($String*,bool)>(&bug8032667::getCheckBox))},
	{"getImage", "(Ljavax/swing/JComponent;)Ljava/awt/Image;", nullptr, $STATIC, $method(static_cast<$Image*(*)($JComponent*)>(&bug8032667::getImage))},
	{"init", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _bug8032667_InnerClassesInfo_[] = {
	{"bug8032667$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug8032667_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug8032667",
	"javax.swing.JApplet",
	nullptr,
	_bug8032667_FieldInfo_,
	_bug8032667_MethodInfo_,
	nullptr,
	nullptr,
	_bug8032667_InnerClassesInfo_,
	nullptr,
	nullptr,
	"bug8032667$1,bug8032667$1$1"
};

$Object* allocate$bug8032667($Class* clazz) {
	return $of($alloc(bug8032667));
}

void bug8032667::init$() {
	$JApplet::init$();
}

void bug8032667::init() {
	$SwingUtilities::invokeLater($$new($bug8032667$1, this));
}

$JCheckBox* bug8032667::getCheckBox($String* text, bool selected) {
	$init(bug8032667);
	$var($JCheckBox, checkBox, $new($JCheckBox, text));
	checkBox->setSelected(selected);
	checkBox->setSize($$new($Dimension, bug8032667::width, bug8032667::height));
	return checkBox;
}

$Image* bug8032667::getImage($JComponent* component) {
	$init(bug8032667);
	$var($BufferedImage, image, $new($BufferedImage, bug8032667::scaledWidth, bug8032667::scaledHeight, $BufferedImage::TYPE_INT_ARGB));
	$var($Graphics, g, image->getGraphics());
	$nc(($cast($Graphics2D, g)))->scale((double)bug8032667::scale, (double)bug8032667::scale);
	$nc(component)->paint(g);
	$nc(g)->dispose();
	return image;
}

bug8032667::bug8032667() {
}

$Class* bug8032667::load$($String* name, bool initialize) {
	$loadClass(bug8032667, name, initialize, &_bug8032667_ClassInfo_, allocate$bug8032667);
	return class$;
}

$Class* bug8032667::class$ = nullptr;
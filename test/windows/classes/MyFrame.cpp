#include <MyFrame.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Frame.h>
#include <java/awt/Graphics.h>
#include <java/awt/Window.h>
#include <java/awt/image/BufferedImage.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JEditorPane.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JScrollPane.h>
#include <javax/swing/WindowConstants.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

#undef DISPOSE_ON_CLOSE
#undef TYPE_INT_ARGB

using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Frame = ::java::awt::Frame;
using $Graphics = ::java::awt::Graphics;
using $Window = ::java::awt::Window;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JEditorPane = ::javax::swing::JEditorPane;
using $JFrame = ::javax::swing::JFrame;
using $JScrollPane = ::javax::swing::JScrollPane;
using $WindowConstants = ::javax::swing::WindowConstants;
using $JTextComponent = ::javax::swing::text::JTextComponent;

$FieldInfo _MyFrame_FieldInfo_[] = {
	{"bi", "Ljava/awt/image/BufferedImage;", nullptr, $PRIVATE, $field(MyFrame, bi)},
	{"content", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(MyFrame, content)},
	{}
};

$MethodInfo _MyFrame_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MyFrame::*)()>(&MyFrame::init$))},
	{"getPixelColor", "(II)Ljava/awt/Color;", nullptr, $PUBLIC},
	{"paintFrameToBufferedImage", "(Ljava/awt/Component;)V", nullptr, $PRIVATE, $method(static_cast<void(MyFrame::*)($Component*)>(&MyFrame::paintFrameToBufferedImage))},
	{}
};

$ClassInfo _MyFrame_ClassInfo_ = {
	$ACC_SUPER,
	"MyFrame",
	"javax.swing.JFrame",
	nullptr,
	_MyFrame_FieldInfo_,
	_MyFrame_MethodInfo_
};

$Object* allocate$MyFrame($Class* clazz) {
	return $of($alloc(MyFrame));
}

void MyFrame::init$() {
	$JFrame::init$();
	$set(this, content, "A\nB\nC\nD\nE\nF\nG\nH\nI\nJ\nK\nL\nM\nN\nO"_s);
	$var($JEditorPane, editpane, $new($JEditorPane));
	editpane->setEditable(false);
	editpane->setText(this->content);
	editpane->setCaretPosition(0);
	$var($JScrollPane, scrollpane, $new($JScrollPane, editpane));
	add(static_cast<$Component*>(scrollpane));
	setDefaultCloseOperation($WindowConstants::DISPOSE_ON_CLOSE);
	setSize($$new($Dimension, 200, 200));
	$set(this, bi, $new($BufferedImage, 200, 200, $BufferedImage::TYPE_INT_ARGB));
	setResizable(false);
	setVisible(true);
}

$Color* MyFrame::getPixelColor(int32_t x, int32_t y) {
	paintFrameToBufferedImage(this);
	int32_t pixel = $nc(this->bi)->getRGB(x, y);
	int32_t alpha = (int32_t)((pixel >> 24) & (uint32_t)255);
	int32_t red = (int32_t)((pixel >> 16) & (uint32_t)255);
	int32_t green = (int32_t)((pixel >> 8) & (uint32_t)255);
	int32_t blue = (int32_t)((pixel) & (uint32_t)255);
	$var($Color, pixelColor, $new($Color, red, green, blue, alpha));
	return pixelColor;
}

void MyFrame::paintFrameToBufferedImage($Component* component) {
	$nc(component)->paint($($nc(this->bi)->getGraphics()));
}

MyFrame::MyFrame() {
}

$Class* MyFrame::load$($String* name, bool initialize) {
	$loadClass(MyFrame, name, initialize, &_MyFrame_ClassInfo_, allocate$MyFrame);
	return class$;
}

$Class* MyFrame::class$ = nullptr;
#include <javax/swing/text/LayeredHighlighter$LayerPainter.h>

#include <java/awt/Graphics.h>
#include <java/awt/Shape.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/LayeredHighlighter.h>
#include <javax/swing/text/View.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace swing {
		namespace text {

$MethodInfo _LayeredHighlighter$LayerPainter_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(LayeredHighlighter$LayerPainter::*)()>(&LayeredHighlighter$LayerPainter::init$))},
	{"paintLayer", "(Ljava/awt/Graphics;IILjava/awt/Shape;Ljavax/swing/text/JTextComponent;Ljavax/swing/text/View;)Ljava/awt/Shape;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _LayeredHighlighter$LayerPainter_InnerClassesInfo_[] = {
	{"javax.swing.text.LayeredHighlighter$LayerPainter", "javax.swing.text.LayeredHighlighter", "LayerPainter", $PUBLIC | $STATIC | $ABSTRACT},
	{"javax.swing.text.Highlighter$HighlightPainter", "javax.swing.text.Highlighter", "HighlightPainter", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _LayeredHighlighter$LayerPainter_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.swing.text.LayeredHighlighter$LayerPainter",
	"java.lang.Object",
	"javax.swing.text.Highlighter$HighlightPainter",
	nullptr,
	_LayeredHighlighter$LayerPainter_MethodInfo_,
	nullptr,
	nullptr,
	_LayeredHighlighter$LayerPainter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.LayeredHighlighter"
};

$Object* allocate$LayeredHighlighter$LayerPainter($Class* clazz) {
	return $of($alloc(LayeredHighlighter$LayerPainter));
}

void LayeredHighlighter$LayerPainter::init$() {
}

LayeredHighlighter$LayerPainter::LayeredHighlighter$LayerPainter() {
}

$Class* LayeredHighlighter$LayerPainter::load$($String* name, bool initialize) {
	$loadClass(LayeredHighlighter$LayerPainter, name, initialize, &_LayeredHighlighter$LayerPainter_ClassInfo_, allocate$LayeredHighlighter$LayerPainter);
	return class$;
}

$Class* LayeredHighlighter$LayerPainter::class$ = nullptr;

		} // text
	} // swing
} // javax
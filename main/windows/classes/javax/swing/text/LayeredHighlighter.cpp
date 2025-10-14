#include <javax/swing/text/LayeredHighlighter.h>

#include <java/awt/Graphics.h>
#include <java/awt/Shape.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/View.h>
#include <jcpp.h>

using $Graphics = ::java::awt::Graphics;
using $Shape = ::java::awt::Shape;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Highlighter = ::javax::swing::text::Highlighter;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $View = ::javax::swing::text::View;

namespace javax {
	namespace swing {
		namespace text {

$MethodInfo _LayeredHighlighter_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(LayeredHighlighter::*)()>(&LayeredHighlighter::init$))},
	{"paintLayeredHighlights", "(Ljava/awt/Graphics;IILjava/awt/Shape;Ljavax/swing/text/JTextComponent;Ljavax/swing/text/View;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _LayeredHighlighter_InnerClassesInfo_[] = {
	{"javax.swing.text.LayeredHighlighter$LayerPainter", "javax.swing.text.LayeredHighlighter", "LayerPainter", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _LayeredHighlighter_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.swing.text.LayeredHighlighter",
	"java.lang.Object",
	"javax.swing.text.Highlighter",
	nullptr,
	_LayeredHighlighter_MethodInfo_,
	nullptr,
	nullptr,
	_LayeredHighlighter_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.text.LayeredHighlighter$LayerPainter"
};

$Object* allocate$LayeredHighlighter($Class* clazz) {
	return $of($alloc(LayeredHighlighter));
}

void LayeredHighlighter::init$() {
}

LayeredHighlighter::LayeredHighlighter() {
}

$Class* LayeredHighlighter::load$($String* name, bool initialize) {
	$loadClass(LayeredHighlighter, name, initialize, &_LayeredHighlighter_ClassInfo_, allocate$LayeredHighlighter);
	return class$;
}

$Class* LayeredHighlighter::class$ = nullptr;

		} // text
	} // swing
} // javax
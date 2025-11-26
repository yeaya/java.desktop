#include <javax/swing/text/Highlighter$HighlightPainter.h>

#include <java/awt/Graphics.h>
#include <java/awt/Shape.h>
#include <javax/swing/text/Highlighter.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

using $Graphics = ::java::awt::Graphics;
using $Shape = ::java::awt::Shape;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Highlighter = ::javax::swing::text::Highlighter;
using $JTextComponent = ::javax::swing::text::JTextComponent;

namespace javax {
	namespace swing {
		namespace text {

$MethodInfo _Highlighter$HighlightPainter_MethodInfo_[] = {
	{"paint", "(Ljava/awt/Graphics;IILjava/awt/Shape;Ljavax/swing/text/JTextComponent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _Highlighter$HighlightPainter_InnerClassesInfo_[] = {
	{"javax.swing.text.Highlighter$HighlightPainter", "javax.swing.text.Highlighter", "HighlightPainter", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Highlighter$HighlightPainter_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.swing.text.Highlighter$HighlightPainter",
	nullptr,
	nullptr,
	nullptr,
	_Highlighter$HighlightPainter_MethodInfo_,
	nullptr,
	nullptr,
	_Highlighter$HighlightPainter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.Highlighter"
};

$Object* allocate$Highlighter$HighlightPainter($Class* clazz) {
	return $of($alloc(Highlighter$HighlightPainter));
}

$Class* Highlighter$HighlightPainter::load$($String* name, bool initialize) {
	$loadClass(Highlighter$HighlightPainter, name, initialize, &_Highlighter$HighlightPainter_ClassInfo_, allocate$Highlighter$HighlightPainter);
	return class$;
}

$Class* Highlighter$HighlightPainter::class$ = nullptr;

		} // text
	} // swing
} // javax
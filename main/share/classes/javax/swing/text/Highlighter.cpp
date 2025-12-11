#include <javax/swing/text/Highlighter.h>

#include <java/awt/Graphics.h>
#include <javax/swing/text/Highlighter$Highlight.h>
#include <javax/swing/text/Highlighter$HighlightPainter.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace swing {
		namespace text {

$MethodInfo _Highlighter_MethodInfo_[] = {
	{"addHighlight", "(IILjavax/swing/text/Highlighter$HighlightPainter;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.swing.text.BadLocationException"},
	{"changeHighlight", "(Ljava/lang/Object;II)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.swing.text.BadLocationException"},
	{"deinstall", "(Ljavax/swing/text/JTextComponent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"getHighlights", "()[Ljavax/swing/text/Highlighter$Highlight;", nullptr, $PUBLIC | $ABSTRACT},
	{"install", "(Ljavax/swing/text/JTextComponent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"paint", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"removeAllHighlights", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"removeHighlight", "(Ljava/lang/Object;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _Highlighter_InnerClassesInfo_[] = {
	{"javax.swing.text.Highlighter$Highlight", "javax.swing.text.Highlighter", "Highlight", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"javax.swing.text.Highlighter$HighlightPainter", "javax.swing.text.Highlighter", "HighlightPainter", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Highlighter_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.swing.text.Highlighter",
	nullptr,
	nullptr,
	nullptr,
	_Highlighter_MethodInfo_,
	nullptr,
	nullptr,
	_Highlighter_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.text.Highlighter$Highlight,javax.swing.text.Highlighter$HighlightPainter"
};

$Object* allocate$Highlighter($Class* clazz) {
	return $of($alloc(Highlighter));
}

$Class* Highlighter::load$($String* name, bool initialize) {
	$loadClass(Highlighter, name, initialize, &_Highlighter_ClassInfo_, allocate$Highlighter);
	return class$;
}

$Class* Highlighter::class$ = nullptr;

		} // text
	} // swing
} // javax
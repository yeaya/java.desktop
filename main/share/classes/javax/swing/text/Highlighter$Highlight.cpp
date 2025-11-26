#include <javax/swing/text/Highlighter$Highlight.h>

#include <javax/swing/text/Highlighter$HighlightPainter.h>
#include <javax/swing/text/Highlighter.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Highlighter = ::javax::swing::text::Highlighter;
using $Highlighter$HighlightPainter = ::javax::swing::text::Highlighter$HighlightPainter;

namespace javax {
	namespace swing {
		namespace text {

$MethodInfo _Highlighter$Highlight_MethodInfo_[] = {
	{"getEndOffset", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getPainter", "()Ljavax/swing/text/Highlighter$HighlightPainter;", nullptr, $PUBLIC | $ABSTRACT},
	{"getStartOffset", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _Highlighter$Highlight_InnerClassesInfo_[] = {
	{"javax.swing.text.Highlighter$Highlight", "javax.swing.text.Highlighter", "Highlight", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Highlighter$Highlight_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.swing.text.Highlighter$Highlight",
	nullptr,
	nullptr,
	nullptr,
	_Highlighter$Highlight_MethodInfo_,
	nullptr,
	nullptr,
	_Highlighter$Highlight_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.Highlighter"
};

$Object* allocate$Highlighter$Highlight($Class* clazz) {
	return $of($alloc(Highlighter$Highlight));
}

$Class* Highlighter$Highlight::load$($String* name, bool initialize) {
	$loadClass(Highlighter$Highlight, name, initialize, &_Highlighter$Highlight_ClassInfo_, allocate$Highlighter$Highlight);
	return class$;
}

$Class* Highlighter$Highlight::class$ = nullptr;

		} // text
	} // swing
} // javax
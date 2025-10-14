#include <javax/swing/text/DefaultHighlighter$HighlightInfo.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/text/DefaultHighlighter.h>
#include <javax/swing/text/Highlighter$HighlightPainter.h>
#include <javax/swing/text/Position.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DefaultHighlighter = ::javax::swing::text::DefaultHighlighter;
using $Highlighter$Highlight = ::javax::swing::text::Highlighter$Highlight;
using $Highlighter$HighlightPainter = ::javax::swing::text::Highlighter$HighlightPainter;
using $Position = ::javax::swing::text::Position;

namespace javax {
	namespace swing {
		namespace text {

$FieldInfo _DefaultHighlighter$HighlightInfo_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/text/DefaultHighlighter;", nullptr, $FINAL | $SYNTHETIC, $field(DefaultHighlighter$HighlightInfo, this$0)},
	{"p0", "Ljavax/swing/text/Position;", nullptr, 0, $field(DefaultHighlighter$HighlightInfo, p0)},
	{"p1", "Ljavax/swing/text/Position;", nullptr, 0, $field(DefaultHighlighter$HighlightInfo, p1)},
	{"painter", "Ljavax/swing/text/Highlighter$HighlightPainter;", nullptr, 0, $field(DefaultHighlighter$HighlightInfo, painter)},
	{}
};

$MethodInfo _DefaultHighlighter$HighlightInfo_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/text/DefaultHighlighter;)V", nullptr, 0, $method(static_cast<void(DefaultHighlighter$HighlightInfo::*)($DefaultHighlighter*)>(&DefaultHighlighter$HighlightInfo::init$))},
	{"getEndOffset", "()I", nullptr, $PUBLIC},
	{"getPainter", "()Ljavax/swing/text/Highlighter$HighlightPainter;", nullptr, $PUBLIC},
	{"getStartOffset", "()I", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DefaultHighlighter$HighlightInfo_InnerClassesInfo_[] = {
	{"javax.swing.text.DefaultHighlighter$HighlightInfo", "javax.swing.text.DefaultHighlighter", "HighlightInfo", 0},
	{"javax.swing.text.Highlighter$Highlight", "javax.swing.text.Highlighter", "Highlight", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _DefaultHighlighter$HighlightInfo_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.DefaultHighlighter$HighlightInfo",
	"java.lang.Object",
	"javax.swing.text.Highlighter$Highlight",
	_DefaultHighlighter$HighlightInfo_FieldInfo_,
	_DefaultHighlighter$HighlightInfo_MethodInfo_,
	nullptr,
	nullptr,
	_DefaultHighlighter$HighlightInfo_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.DefaultHighlighter"
};

$Object* allocate$DefaultHighlighter$HighlightInfo($Class* clazz) {
	return $of($alloc(DefaultHighlighter$HighlightInfo));
}

void DefaultHighlighter$HighlightInfo::init$($DefaultHighlighter* this$0) {
	$set(this, this$0, this$0);
}

int32_t DefaultHighlighter$HighlightInfo::getStartOffset() {
	return $nc(this->p0)->getOffset();
}

int32_t DefaultHighlighter$HighlightInfo::getEndOffset() {
	return $nc(this->p1)->getOffset();
}

$Highlighter$HighlightPainter* DefaultHighlighter$HighlightInfo::getPainter() {
	return this->painter;
}

DefaultHighlighter$HighlightInfo::DefaultHighlighter$HighlightInfo() {
}

$Class* DefaultHighlighter$HighlightInfo::load$($String* name, bool initialize) {
	$loadClass(DefaultHighlighter$HighlightInfo, name, initialize, &_DefaultHighlighter$HighlightInfo_ClassInfo_, allocate$DefaultHighlighter$HighlightInfo);
	return class$;
}

$Class* DefaultHighlighter$HighlightInfo::class$ = nullptr;

		} // text
	} // swing
} // javax
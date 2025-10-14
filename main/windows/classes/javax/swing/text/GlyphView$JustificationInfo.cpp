#include <javax/swing/text/GlyphView$JustificationInfo.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/BitSet.h>
#include <javax/swing/text/GlyphView.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BitSet = ::java::util::BitSet;
using $GlyphView = ::javax::swing::text::GlyphView;

namespace javax {
	namespace swing {
		namespace text {

$FieldInfo _GlyphView$JustificationInfo_FieldInfo_[] = {
	{"start", "I", nullptr, $FINAL, $field(GlyphView$JustificationInfo, start)},
	{"end", "I", nullptr, $FINAL, $field(GlyphView$JustificationInfo, end)},
	{"leadingSpaces", "I", nullptr, $FINAL, $field(GlyphView$JustificationInfo, leadingSpaces)},
	{"contentSpaces", "I", nullptr, $FINAL, $field(GlyphView$JustificationInfo, contentSpaces)},
	{"trailingSpaces", "I", nullptr, $FINAL, $field(GlyphView$JustificationInfo, trailingSpaces)},
	{"hasTab", "Z", nullptr, $FINAL, $field(GlyphView$JustificationInfo, hasTab)},
	{"spaceMap", "Ljava/util/BitSet;", nullptr, $FINAL, $field(GlyphView$JustificationInfo, spaceMap)},
	{}
};

$MethodInfo _GlyphView$JustificationInfo_MethodInfo_[] = {
	{"<init>", "(IIIIIZLjava/util/BitSet;)V", nullptr, 0, $method(static_cast<void(GlyphView$JustificationInfo::*)(int32_t,int32_t,int32_t,int32_t,int32_t,bool,$BitSet*)>(&GlyphView$JustificationInfo::init$))},
	{}
};

$InnerClassInfo _GlyphView$JustificationInfo_InnerClassesInfo_[] = {
	{"javax.swing.text.GlyphView$JustificationInfo", "javax.swing.text.GlyphView", "JustificationInfo", $STATIC},
	{}
};

$ClassInfo _GlyphView$JustificationInfo_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.GlyphView$JustificationInfo",
	"java.lang.Object",
	nullptr,
	_GlyphView$JustificationInfo_FieldInfo_,
	_GlyphView$JustificationInfo_MethodInfo_,
	nullptr,
	nullptr,
	_GlyphView$JustificationInfo_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.GlyphView"
};

$Object* allocate$GlyphView$JustificationInfo($Class* clazz) {
	return $of($alloc(GlyphView$JustificationInfo));
}

void GlyphView$JustificationInfo::init$(int32_t start, int32_t end, int32_t leadingSpaces, int32_t contentSpaces, int32_t trailingSpaces, bool hasTab, $BitSet* spaceMap) {
	this->start = start;
	this->end = end;
	this->leadingSpaces = leadingSpaces;
	this->contentSpaces = contentSpaces;
	this->trailingSpaces = trailingSpaces;
	this->hasTab = hasTab;
	$set(this, spaceMap, spaceMap);
}

GlyphView$JustificationInfo::GlyphView$JustificationInfo() {
}

$Class* GlyphView$JustificationInfo::load$($String* name, bool initialize) {
	$loadClass(GlyphView$JustificationInfo, name, initialize, &_GlyphView$JustificationInfo_ClassInfo_, allocate$GlyphView$JustificationInfo);
	return class$;
}

$Class* GlyphView$JustificationInfo::class$ = nullptr;

		} // text
	} // swing
} // javax
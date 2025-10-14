#include <javax/swing/text/html/AccessibleHTML$TextElementInfo$TextAccessibleContext$IndexedSegment.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/text/Segment.h>
#include <javax/swing/text/html/AccessibleHTML$TextElementInfo$TextAccessibleContext.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Segment = ::javax::swing::text::Segment;
using $AccessibleHTML$TextElementInfo$TextAccessibleContext = ::javax::swing::text::html::AccessibleHTML$TextElementInfo$TextAccessibleContext;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

$FieldInfo _AccessibleHTML$TextElementInfo$TextAccessibleContext$IndexedSegment_FieldInfo_[] = {
	{"this$2", "Ljavax/swing/text/html/AccessibleHTML$TextElementInfo$TextAccessibleContext;", nullptr, $FINAL | $SYNTHETIC, $field(AccessibleHTML$TextElementInfo$TextAccessibleContext$IndexedSegment, this$2)},
	{"modelOffset", "I", nullptr, $PUBLIC, $field(AccessibleHTML$TextElementInfo$TextAccessibleContext$IndexedSegment, modelOffset)},
	{}
};

$MethodInfo _AccessibleHTML$TextElementInfo$TextAccessibleContext$IndexedSegment_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/text/html/AccessibleHTML$TextElementInfo$TextAccessibleContext;)V", nullptr, $PRIVATE, $method(static_cast<void(AccessibleHTML$TextElementInfo$TextAccessibleContext$IndexedSegment::*)($AccessibleHTML$TextElementInfo$TextAccessibleContext*)>(&AccessibleHTML$TextElementInfo$TextAccessibleContext$IndexedSegment::init$))},
	{}
};

$InnerClassInfo _AccessibleHTML$TextElementInfo$TextAccessibleContext$IndexedSegment_InnerClassesInfo_[] = {
	{"javax.swing.text.html.AccessibleHTML$TextElementInfo", "javax.swing.text.html.AccessibleHTML", "TextElementInfo", 0},
	{"javax.swing.text.html.AccessibleHTML$TextElementInfo$TextAccessibleContext", "javax.swing.text.html.AccessibleHTML$TextElementInfo", "TextAccessibleContext", $PUBLIC},
	{"javax.swing.text.html.AccessibleHTML$TextElementInfo$TextAccessibleContext$IndexedSegment", "javax.swing.text.html.AccessibleHTML$TextElementInfo$TextAccessibleContext", "IndexedSegment", $PRIVATE},
	{}
};

$ClassInfo _AccessibleHTML$TextElementInfo$TextAccessibleContext$IndexedSegment_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.html.AccessibleHTML$TextElementInfo$TextAccessibleContext$IndexedSegment",
	"javax.swing.text.Segment",
	nullptr,
	_AccessibleHTML$TextElementInfo$TextAccessibleContext$IndexedSegment_FieldInfo_,
	_AccessibleHTML$TextElementInfo$TextAccessibleContext$IndexedSegment_MethodInfo_,
	nullptr,
	nullptr,
	_AccessibleHTML$TextElementInfo$TextAccessibleContext$IndexedSegment_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.html.AccessibleHTML"
};

$Object* allocate$AccessibleHTML$TextElementInfo$TextAccessibleContext$IndexedSegment($Class* clazz) {
	return $of($alloc(AccessibleHTML$TextElementInfo$TextAccessibleContext$IndexedSegment));
}

void AccessibleHTML$TextElementInfo$TextAccessibleContext$IndexedSegment::init$($AccessibleHTML$TextElementInfo$TextAccessibleContext* this$2) {
	$set(this, this$2, this$2);
	$Segment::init$();
}

AccessibleHTML$TextElementInfo$TextAccessibleContext$IndexedSegment::AccessibleHTML$TextElementInfo$TextAccessibleContext$IndexedSegment() {
}

$Class* AccessibleHTML$TextElementInfo$TextAccessibleContext$IndexedSegment::load$($String* name, bool initialize) {
	$loadClass(AccessibleHTML$TextElementInfo$TextAccessibleContext$IndexedSegment, name, initialize, &_AccessibleHTML$TextElementInfo$TextAccessibleContext$IndexedSegment_ClassInfo_, allocate$AccessibleHTML$TextElementInfo$TextAccessibleContext$IndexedSegment);
	return class$;
}

$Class* AccessibleHTML$TextElementInfo$TextAccessibleContext$IndexedSegment::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax
#include <TestCCEOnEditEvent$3.h>

#include <TestCCEOnEditEvent$3$1.h>
#include <TestCCEOnEditEvent.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JTextArea.h>
#include <javax/swing/text/AbstractDocument.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/PlainDocument.h>
#include <jcpp.h>

using $TestCCEOnEditEvent = ::TestCCEOnEditEvent;
using $TestCCEOnEditEvent$3$1 = ::TestCCEOnEditEvent$3$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JTextArea = ::javax::swing::JTextArea;
using $AbstractDocument = ::javax::swing::text::AbstractDocument;
using $Document = ::javax::swing::text::Document;
using $PlainDocument = ::javax::swing::text::PlainDocument;

$FieldInfo _TestCCEOnEditEvent$3_FieldInfo_[] = {
	{"this$0", "LTestCCEOnEditEvent;", nullptr, $FINAL | $SYNTHETIC, $field(TestCCEOnEditEvent$3, this$0)},
	{}
};

$MethodInfo _TestCCEOnEditEvent$3_MethodInfo_[] = {
	{"<init>", "(LTestCCEOnEditEvent;Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(TestCCEOnEditEvent$3::*)($TestCCEOnEditEvent*,$String*)>(&TestCCEOnEditEvent$3::init$))},
	{"createDefaultModel", "()Ljavax/swing/text/Document;", nullptr, $PROTECTED},
	{}
};

$EnclosingMethodInfo _TestCCEOnEditEvent$3_EnclosingMethodInfo_ = {
	"TestCCEOnEditEvent",
	"createTextArea",
	"()V"
};

$InnerClassInfo _TestCCEOnEditEvent$3_InnerClassesInfo_[] = {
	{"TestCCEOnEditEvent$3", nullptr, nullptr, 0},
	{"TestCCEOnEditEvent$3$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _TestCCEOnEditEvent$3_ClassInfo_ = {
	$ACC_SUPER,
	"TestCCEOnEditEvent$3",
	"javax.swing.JTextArea",
	nullptr,
	_TestCCEOnEditEvent$3_FieldInfo_,
	_TestCCEOnEditEvent$3_MethodInfo_,
	nullptr,
	&_TestCCEOnEditEvent$3_EnclosingMethodInfo_,
	_TestCCEOnEditEvent$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"TestCCEOnEditEvent"
};

$Object* allocate$TestCCEOnEditEvent$3($Class* clazz) {
	return $of($alloc(TestCCEOnEditEvent$3));
}

void TestCCEOnEditEvent$3::init$($TestCCEOnEditEvent* this$0, $String* arg0) {
	$set(this, this$0, this$0);
	$JTextArea::init$(arg0);
}

$Document* TestCCEOnEditEvent$3::createDefaultModel() {
	return $new($TestCCEOnEditEvent$3$1, this);
}

TestCCEOnEditEvent$3::TestCCEOnEditEvent$3() {
}

$Class* TestCCEOnEditEvent$3::load$($String* name, bool initialize) {
	$loadClass(TestCCEOnEditEvent$3, name, initialize, &_TestCCEOnEditEvent$3_ClassInfo_, allocate$TestCCEOnEditEvent$3);
	return class$;
}

$Class* TestCCEOnEditEvent$3::class$ = nullptr;
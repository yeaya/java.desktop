#include <TestBasicComboBoxEditor$UserComboBoxEditorType.h>

#include <TestBasicComboBoxEditor.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $TestBasicComboBoxEditor = ::TestBasicComboBoxEditor;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _TestBasicComboBoxEditor$UserComboBoxEditorType_FieldInfo_[] = {
	{"str", "Ljava/lang/String;", nullptr, 0, $field(TestBasicComboBoxEditor$UserComboBoxEditorType, str)},
	{}
};

$MethodInfo _TestBasicComboBoxEditor$UserComboBoxEditorType_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(TestBasicComboBoxEditor$UserComboBoxEditorType::*)($String*)>(&TestBasicComboBoxEditor$UserComboBoxEditorType::init$))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"valueOf", "(Ljava/lang/String;)LTestBasicComboBoxEditor$UserComboBoxEditorType;", nullptr, $PUBLIC | $STATIC, $method(static_cast<TestBasicComboBoxEditor$UserComboBoxEditorType*(*)($String*)>(&TestBasicComboBoxEditor$UserComboBoxEditorType::valueOf))},
	{}
};

$InnerClassInfo _TestBasicComboBoxEditor$UserComboBoxEditorType_InnerClassesInfo_[] = {
	{"TestBasicComboBoxEditor$UserComboBoxEditorType", "TestBasicComboBoxEditor", "UserComboBoxEditorType", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _TestBasicComboBoxEditor$UserComboBoxEditorType_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"TestBasicComboBoxEditor$UserComboBoxEditorType",
	"java.lang.Object",
	nullptr,
	_TestBasicComboBoxEditor$UserComboBoxEditorType_FieldInfo_,
	_TestBasicComboBoxEditor$UserComboBoxEditorType_MethodInfo_,
	nullptr,
	nullptr,
	_TestBasicComboBoxEditor$UserComboBoxEditorType_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"TestBasicComboBoxEditor"
};

$Object* allocate$TestBasicComboBoxEditor$UserComboBoxEditorType($Class* clazz) {
	return $of($alloc(TestBasicComboBoxEditor$UserComboBoxEditorType));
}

void TestBasicComboBoxEditor$UserComboBoxEditorType::init$($String* str) {
	$set(this, str, str);
}

TestBasicComboBoxEditor$UserComboBoxEditorType* TestBasicComboBoxEditor$UserComboBoxEditorType::valueOf($String* str) {
	return $new(TestBasicComboBoxEditor$UserComboBoxEditorType, str);
}

$String* TestBasicComboBoxEditor$UserComboBoxEditorType::toString() {
	return $str({"UserComboBoxEditorType: "_s, this->str});
}

TestBasicComboBoxEditor$UserComboBoxEditorType::TestBasicComboBoxEditor$UserComboBoxEditorType() {
}

$Class* TestBasicComboBoxEditor$UserComboBoxEditorType::load$($String* name, bool initialize) {
	$loadClass(TestBasicComboBoxEditor$UserComboBoxEditorType, name, initialize, &_TestBasicComboBoxEditor$UserComboBoxEditorType_ClassInfo_, allocate$TestBasicComboBoxEditor$UserComboBoxEditorType);
	return class$;
}

$Class* TestBasicComboBoxEditor$UserComboBoxEditorType::class$ = nullptr;
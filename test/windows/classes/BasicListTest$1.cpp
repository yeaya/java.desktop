#include <BasicListTest$1.h>

#include <BasicListTest.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/AbstractListModel.h>
#include <jcpp.h>

using $BasicListTest = ::BasicListTest;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractListModel = ::javax::swing::AbstractListModel;

$FieldInfo _BasicListTest$1_FieldInfo_[] = {
	{"strings", "[Ljava/lang/String;", nullptr, 0, $field(BasicListTest$1, strings)},
	{}
};

$MethodInfo _BasicListTest$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(BasicListTest$1::*)()>(&BasicListTest$1::init$))},
	{"getElementAt", "(I)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getSize", "()I", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _BasicListTest$1_EnclosingMethodInfo_ = {
	"BasicListTest",
	"initComponents",
	"()V"
};

$InnerClassInfo _BasicListTest$1_InnerClassesInfo_[] = {
	{"BasicListTest$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _BasicListTest$1_ClassInfo_ = {
	$ACC_SUPER,
	"BasicListTest$1",
	"javax.swing.AbstractListModel",
	nullptr,
	_BasicListTest$1_FieldInfo_,
	_BasicListTest$1_MethodInfo_,
	nullptr,
	&_BasicListTest$1_EnclosingMethodInfo_,
	_BasicListTest$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"BasicListTest"
};

$Object* allocate$BasicListTest$1($Class* clazz) {
	return $of($alloc(BasicListTest$1));
}

void BasicListTest$1::init$() {
	$AbstractListModel::init$();
	$set(this, strings, $new($StringArray, {
		"Item 1"_s,
		"Item 2"_s,
		"Item 3"_s,
		"Item 4"_s,
		"Item 5"_s
	}));
}

int32_t BasicListTest$1::getSize() {
	return $nc(this->strings)->length;
}

$Object* BasicListTest$1::getElementAt(int32_t i) {
	return $of($nc(this->strings)->get(i));
}

BasicListTest$1::BasicListTest$1() {
}

$Class* BasicListTest$1::load$($String* name, bool initialize) {
	$loadClass(BasicListTest$1, name, initialize, &_BasicListTest$1_ClassInfo_, allocate$BasicListTest$1);
	return class$;
}

$Class* BasicListTest$1::class$ = nullptr;
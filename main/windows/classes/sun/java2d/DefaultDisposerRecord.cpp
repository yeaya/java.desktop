#include <sun/java2d/DefaultDisposerRecord.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DisposerRecord = ::sun::java2d::DisposerRecord;

namespace sun {
	namespace java2d {

$FieldInfo _DefaultDisposerRecord_FieldInfo_[] = {
	{"dataPointer", "J", nullptr, $PRIVATE, $field(DefaultDisposerRecord, dataPointer)},
	{"disposerMethodPointer", "J", nullptr, $PRIVATE, $field(DefaultDisposerRecord, disposerMethodPointer)},
	{}
};

$MethodInfo _DefaultDisposerRecord_MethodInfo_[] = {
	{"<init>", "(JJ)V", nullptr, $PUBLIC, $method(static_cast<void(DefaultDisposerRecord::*)(int64_t,int64_t)>(&DefaultDisposerRecord::init$))},
	{"dispose", "()V", nullptr, $PUBLIC},
	{"getDataPointer", "()J", nullptr, $PUBLIC},
	{"getDisposerMethodPointer", "()J", nullptr, $PUBLIC},
	{"invokeNativeDispose", "(JJ)V", nullptr, $PUBLIC | $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t,int64_t)>(&DefaultDisposerRecord::invokeNativeDispose))},
	{}
};

#define _METHOD_INDEX_invokeNativeDispose 4

$ClassInfo _DefaultDisposerRecord_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.java2d.DefaultDisposerRecord",
	"java.lang.Object",
	"sun.java2d.DisposerRecord",
	_DefaultDisposerRecord_FieldInfo_,
	_DefaultDisposerRecord_MethodInfo_
};

$Object* allocate$DefaultDisposerRecord($Class* clazz) {
	return $of($alloc(DefaultDisposerRecord));
}

void DefaultDisposerRecord::init$(int64_t disposerMethodPointer, int64_t dataPointer) {
	this->disposerMethodPointer = disposerMethodPointer;
	this->dataPointer = dataPointer;
}

void DefaultDisposerRecord::dispose() {
	invokeNativeDispose(this->disposerMethodPointer, this->dataPointer);
}

int64_t DefaultDisposerRecord::getDataPointer() {
	return this->dataPointer;
}

int64_t DefaultDisposerRecord::getDisposerMethodPointer() {
	return this->disposerMethodPointer;
}

void DefaultDisposerRecord::invokeNativeDispose(int64_t disposerMethodPointer, int64_t dataPointer) {
	$init(DefaultDisposerRecord);
	$prepareNativeStatic(DefaultDisposerRecord, invokeNativeDispose, void, int64_t disposerMethodPointer, int64_t dataPointer);
	$invokeNativeStatic(DefaultDisposerRecord, invokeNativeDispose, disposerMethodPointer, dataPointer);
	$finishNativeStatic();
}

DefaultDisposerRecord::DefaultDisposerRecord() {
}

$Class* DefaultDisposerRecord::load$($String* name, bool initialize) {
	$loadClass(DefaultDisposerRecord, name, initialize, &_DefaultDisposerRecord_ClassInfo_, allocate$DefaultDisposerRecord);
	return class$;
}

$Class* DefaultDisposerRecord::class$ = nullptr;

	} // java2d
} // sun
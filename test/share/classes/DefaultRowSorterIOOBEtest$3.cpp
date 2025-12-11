#include <DefaultRowSorterIOOBEtest$3.h>

#include <DefaultRowSorterIOOBEtest.h>
#include <java/io/ByteArrayOutputStream.h>
#include <jcpp.h>

using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _DefaultRowSorterIOOBEtest$3_FieldInfo_[] = {
	{"val$err", "Ljava/io/PrintStream;", nullptr, $FINAL | $SYNTHETIC, $field(DefaultRowSorterIOOBEtest$3, val$err)},
	{}
};

$MethodInfo _DefaultRowSorterIOOBEtest$3_MethodInfo_[] = {
	{"<init>", "(ILjava/io/PrintStream;)V", nullptr, 0, $method(static_cast<void(DefaultRowSorterIOOBEtest$3::*)(int32_t,$PrintStream*)>(&DefaultRowSorterIOOBEtest$3::init$))},
	{"write", "([BII)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{}
};

$EnclosingMethodInfo _DefaultRowSorterIOOBEtest$3_EnclosingMethodInfo_ = {
	"DefaultRowSorterIOOBEtest",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _DefaultRowSorterIOOBEtest$3_InnerClassesInfo_[] = {
	{"DefaultRowSorterIOOBEtest$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _DefaultRowSorterIOOBEtest$3_ClassInfo_ = {
	$ACC_SUPER,
	"DefaultRowSorterIOOBEtest$3",
	"java.io.ByteArrayOutputStream",
	nullptr,
	_DefaultRowSorterIOOBEtest$3_FieldInfo_,
	_DefaultRowSorterIOOBEtest$3_MethodInfo_,
	nullptr,
	&_DefaultRowSorterIOOBEtest$3_EnclosingMethodInfo_,
	_DefaultRowSorterIOOBEtest$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"DefaultRowSorterIOOBEtest"
};

$Object* allocate$DefaultRowSorterIOOBEtest$3($Class* clazz) {
	return $of($alloc(DefaultRowSorterIOOBEtest$3));
}

void DefaultRowSorterIOOBEtest$3::init$(int32_t arg0, $PrintStream* val$err) {
	$set(this, val$err, val$err);
	$ByteArrayOutputStream::init$(arg0);
}

void DefaultRowSorterIOOBEtest$3::write($bytes* b, int32_t off, int32_t len) {
	$synchronized(this) {
		$ByteArrayOutputStream::write(b, off, len);
		$nc(this->val$err)->print($$new($String, b, off, len));
	}
}

DefaultRowSorterIOOBEtest$3::DefaultRowSorterIOOBEtest$3() {
}

$Class* DefaultRowSorterIOOBEtest$3::load$($String* name, bool initialize) {
	$loadClass(DefaultRowSorterIOOBEtest$3, name, initialize, &_DefaultRowSorterIOOBEtest$3_ClassInfo_, allocate$DefaultRowSorterIOOBEtest$3);
	return class$;
}

$Class* DefaultRowSorterIOOBEtest$3::class$ = nullptr;
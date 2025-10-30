#include <sun/font/TrueTypeFont$1.h>

#include <java/io/RandomAccessFile.h>
#include <sun/font/PhysicalFont.h>
#include <sun/font/TrueTypeFont.h>
#include <jcpp.h>

using $RandomAccessFile = ::java::io::RandomAccessFile;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivilegedExceptionAction = ::java::security::PrivilegedExceptionAction;
using $PhysicalFont = ::sun::font::PhysicalFont;
using $TrueTypeFont = ::sun::font::TrueTypeFont;

namespace sun {
	namespace font {

$FieldInfo _TrueTypeFont$1_FieldInfo_[] = {
	{"this$0", "Lsun/font/TrueTypeFont;", nullptr, $FINAL | $SYNTHETIC, $field(TrueTypeFont$1, this$0)},
	{}
};

$MethodInfo _TrueTypeFont$1_MethodInfo_[] = {
	{"<init>", "(Lsun/font/TrueTypeFont;)V", nullptr, 0, $method(static_cast<void(TrueTypeFont$1::*)($TrueTypeFont*)>(&TrueTypeFont$1::init$))},
	{"run", "()Ljava/io/RandomAccessFile;", nullptr, $PUBLIC, nullptr, "java.io.FileNotFoundException"},
	{}
};

$EnclosingMethodInfo _TrueTypeFont$1_EnclosingMethodInfo_ = {
	"sun.font.TrueTypeFont",
	"open",
	"(Z)Ljava/nio/channels/FileChannel;"
};

$InnerClassInfo _TrueTypeFont$1_InnerClassesInfo_[] = {
	{"sun.font.TrueTypeFont$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _TrueTypeFont$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.font.TrueTypeFont$1",
	"java.lang.Object",
	"java.security.PrivilegedExceptionAction",
	_TrueTypeFont$1_FieldInfo_,
	_TrueTypeFont$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedExceptionAction<Ljava/io/RandomAccessFile;>;",
	&_TrueTypeFont$1_EnclosingMethodInfo_,
	_TrueTypeFont$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.font.TrueTypeFont"
};

$Object* allocate$TrueTypeFont$1($Class* clazz) {
	return $of($alloc(TrueTypeFont$1));
}

void TrueTypeFont$1::init$($TrueTypeFont* this$0) {
	$set(this, this$0, this$0);
}

$Object* TrueTypeFont$1::run() {
	return $of($new($RandomAccessFile, this->this$0->platName, "r"_s));
}

TrueTypeFont$1::TrueTypeFont$1() {
}

$Class* TrueTypeFont$1::load$($String* name, bool initialize) {
	$loadClass(TrueTypeFont$1, name, initialize, &_TrueTypeFont$1_ClassInfo_, allocate$TrueTypeFont$1);
	return class$;
}

$Class* TrueTypeFont$1::class$ = nullptr;

	} // font
} // sun
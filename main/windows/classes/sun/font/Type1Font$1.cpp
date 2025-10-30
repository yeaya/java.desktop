#include <sun/font/Type1Font$1.h>

#include <java/io/FileNotFoundException.h>
#include <java/io/RandomAccessFile.h>
#include <sun/font/PhysicalFont.h>
#include <sun/font/Type1Font.h>
#include <jcpp.h>

using $FileNotFoundException = ::java::io::FileNotFoundException;
using $RandomAccessFile = ::java::io::RandomAccessFile;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $PhysicalFont = ::sun::font::PhysicalFont;
using $Type1Font = ::sun::font::Type1Font;

namespace sun {
	namespace font {

$FieldInfo _Type1Font$1_FieldInfo_[] = {
	{"this$0", "Lsun/font/Type1Font;", nullptr, $FINAL | $SYNTHETIC, $field(Type1Font$1, this$0)},
	{}
};

$MethodInfo _Type1Font$1_MethodInfo_[] = {
	{"<init>", "(Lsun/font/Type1Font;)V", nullptr, 0, $method(static_cast<void(Type1Font$1::*)($Type1Font*)>(&Type1Font$1::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Type1Font$1_EnclosingMethodInfo_ = {
	"sun.font.Type1Font",
	"getBuffer",
	"()Ljava/nio/ByteBuffer;"
};

$InnerClassInfo _Type1Font$1_InnerClassesInfo_[] = {
	{"sun.font.Type1Font$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Type1Font$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.font.Type1Font$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_Type1Font$1_FieldInfo_,
	_Type1Font$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Object;>;",
	&_Type1Font$1_EnclosingMethodInfo_,
	_Type1Font$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.font.Type1Font"
};

$Object* allocate$Type1Font$1($Class* clazz) {
	return $of($alloc(Type1Font$1));
}

void Type1Font$1::init$($Type1Font* this$0) {
	$set(this, this$0, this$0);
}

$Object* Type1Font$1::run() {
	try {
		return $of($new($RandomAccessFile, this->this$0->platName, "r"_s));
	} catch ($FileNotFoundException& ffne) {
	}
	return $of(nullptr);
}

Type1Font$1::Type1Font$1() {
}

$Class* Type1Font$1::load$($String* name, bool initialize) {
	$loadClass(Type1Font$1, name, initialize, &_Type1Font$1_ClassInfo_, allocate$Type1Font$1);
	return class$;
}

$Class* Type1Font$1::class$ = nullptr;

	} // font
} // sun
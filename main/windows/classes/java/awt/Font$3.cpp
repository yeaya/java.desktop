#include <java/awt/Font$3.h>

#include <java/awt/Font.h>
#include <java/io/File.h>
#include <jcpp.h>

using $Font = ::java::awt::Font;
using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivilegedExceptionAction = ::java::security::PrivilegedExceptionAction;

namespace java {
	namespace awt {

$FieldInfo _Font$3_FieldInfo_[] = {
	{"val$tFile", "Ljava/io/File;", nullptr, $FINAL | $SYNTHETIC, $field(Font$3, val$tFile)},
	{}
};

$MethodInfo _Font$3_MethodInfo_[] = {
	{"<init>", "(Ljava/io/File;)V", "()V", 0, $method(static_cast<void(Font$3::*)($File*)>(&Font$3::init$))},
	{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Font$3_EnclosingMethodInfo_ = {
	"java.awt.Font",
	"createFont0",
	"(ILjava/io/InputStream;ZLsun/font/CreatedFontTracker;)[Ljava/awt/Font;"
};

$InnerClassInfo _Font$3_InnerClassesInfo_[] = {
	{"java.awt.Font$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Font$3_ClassInfo_ = {
	$ACC_SUPER,
	"java.awt.Font$3",
	"java.lang.Object",
	"java.security.PrivilegedExceptionAction",
	_Font$3_FieldInfo_,
	_Font$3_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedExceptionAction<Ljava/lang/Void;>;",
	&_Font$3_EnclosingMethodInfo_,
	_Font$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.Font"
};

$Object* allocate$Font$3($Class* clazz) {
	return $of($alloc(Font$3));
}

void Font$3::init$($File* val$tFile) {
	$set(this, val$tFile, val$tFile);
}

$Object* Font$3::run() {
	$nc(this->val$tFile)->delete$();
	return $of(nullptr);
}

Font$3::Font$3() {
}

$Class* Font$3::load$($String* name, bool initialize) {
	$loadClass(Font$3, name, initialize, &_Font$3_ClassInfo_, allocate$Font$3);
	return class$;
}

$Class* Font$3::class$ = nullptr;

	} // awt
} // java
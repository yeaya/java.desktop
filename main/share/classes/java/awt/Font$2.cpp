#include <java/awt/Font$2.h>

#include <java/awt/Font.h>
#include <java/io/File.h>
#include <java/io/FileOutputStream.h>
#include <jcpp.h>

using $Font = ::java::awt::Font;
using $File = ::java::io::File;
using $FileOutputStream = ::java::io::FileOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivilegedExceptionAction = ::java::security::PrivilegedExceptionAction;

namespace java {
	namespace awt {

$FieldInfo _Font$2_FieldInfo_[] = {
	{"val$tFile", "Ljava/io/File;", nullptr, $FINAL | $SYNTHETIC, $field(Font$2, val$tFile)},
	{}
};

$MethodInfo _Font$2_MethodInfo_[] = {
	{"<init>", "(Ljava/io/File;)V", "()V", 0, $method(static_cast<void(Font$2::*)($File*)>(&Font$2::init$))},
	{"run", "()Ljava/io/OutputStream;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$EnclosingMethodInfo _Font$2_EnclosingMethodInfo_ = {
	"java.awt.Font",
	"createFont0",
	"(ILjava/io/InputStream;ZLsun/font/CreatedFontTracker;)[Ljava/awt/Font;"
};

$InnerClassInfo _Font$2_InnerClassesInfo_[] = {
	{"java.awt.Font$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Font$2_ClassInfo_ = {
	$ACC_SUPER,
	"java.awt.Font$2",
	"java.lang.Object",
	"java.security.PrivilegedExceptionAction",
	_Font$2_FieldInfo_,
	_Font$2_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedExceptionAction<Ljava/io/OutputStream;>;",
	&_Font$2_EnclosingMethodInfo_,
	_Font$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.Font"
};

$Object* allocate$Font$2($Class* clazz) {
	return $of($alloc(Font$2));
}

void Font$2::init$($File* val$tFile) {
	$set(this, val$tFile, val$tFile);
}

$Object* Font$2::run() {
	return $of($new($FileOutputStream, this->val$tFile));
}

Font$2::Font$2() {
}

$Class* Font$2::load$($String* name, bool initialize) {
	$loadClass(Font$2, name, initialize, &_Font$2_ClassInfo_, allocate$Font$2);
	return class$;
}

$Class* Font$2::class$ = nullptr;

	} // awt
} // java
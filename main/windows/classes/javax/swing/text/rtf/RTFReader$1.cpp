#include <javax/swing/text/rtf/RTFReader$1.h>

#include <java/io/InputStream.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/text/rtf/RTFReader.h>
#include <jcpp.h>

using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $RTFReader = ::javax::swing::text::rtf::RTFReader;

namespace javax {
	namespace swing {
		namespace text {
			namespace rtf {

$FieldInfo _RTFReader$1_FieldInfo_[] = {
	{"val$name", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(RTFReader$1, val$name)},
	{}
};

$MethodInfo _RTFReader$1_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", "()V", 0, $method(static_cast<void(RTFReader$1::*)($String*)>(&RTFReader$1::init$))},
	{"run", "()Ljava/io/InputStream;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _RTFReader$1_EnclosingMethodInfo_ = {
	"javax.swing.text.rtf.RTFReader",
	"getCharacterSet",
	"(Ljava/lang/String;)Ljava/lang/Object;"
};

$InnerClassInfo _RTFReader$1_InnerClassesInfo_[] = {
	{"javax.swing.text.rtf.RTFReader$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _RTFReader$1_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.rtf.RTFReader$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_RTFReader$1_FieldInfo_,
	_RTFReader$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/io/InputStream;>;",
	&_RTFReader$1_EnclosingMethodInfo_,
	_RTFReader$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.rtf.RTFReader"
};

$Object* allocate$RTFReader$1($Class* clazz) {
	return $of($alloc(RTFReader$1));
}

void RTFReader$1::init$($String* val$name) {
	$set(this, val$name, val$name);
}

$Object* RTFReader$1::run() {
	$beforeCallerSensitive();
	$load($RTFReader);
	return $of($RTFReader::class$->getResourceAsStream($$str({"charsets/"_s, this->val$name, ".txt"_s})));
}

RTFReader$1::RTFReader$1() {
}

$Class* RTFReader$1::load$($String* name, bool initialize) {
	$loadClass(RTFReader$1, name, initialize, &_RTFReader$1_ClassInfo_, allocate$RTFReader$1);
	return class$;
}

$Class* RTFReader$1::class$ = nullptr;

			} // rtf
		} // text
	} // swing
} // javax
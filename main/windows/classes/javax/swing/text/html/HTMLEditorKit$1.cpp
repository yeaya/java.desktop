#include <javax/swing/text/html/HTMLEditorKit$1.h>

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
#include <javax/swing/text/html/HTMLEditorKit.h>
#include <jcpp.h>

using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $HTMLEditorKit = ::javax::swing::text::html::HTMLEditorKit;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

$FieldInfo _HTMLEditorKit$1_FieldInfo_[] = {
	{"val$name", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(HTMLEditorKit$1, val$name)},
	{}
};

$MethodInfo _HTMLEditorKit$1_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", "()V", 0, $method(static_cast<void(HTMLEditorKit$1::*)($String*)>(&HTMLEditorKit$1::init$))},
	{"run", "()Ljava/io/InputStream;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _HTMLEditorKit$1_EnclosingMethodInfo_ = {
	"javax.swing.text.html.HTMLEditorKit",
	"getResourceAsStream",
	"(Ljava/lang/String;)Ljava/io/InputStream;"
};

$InnerClassInfo _HTMLEditorKit$1_InnerClassesInfo_[] = {
	{"javax.swing.text.html.HTMLEditorKit$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HTMLEditorKit$1_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.html.HTMLEditorKit$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_HTMLEditorKit$1_FieldInfo_,
	_HTMLEditorKit$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/io/InputStream;>;",
	&_HTMLEditorKit$1_EnclosingMethodInfo_,
	_HTMLEditorKit$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.html.HTMLEditorKit"
};

$Object* allocate$HTMLEditorKit$1($Class* clazz) {
	return $of($alloc(HTMLEditorKit$1));
}

void HTMLEditorKit$1::init$($String* val$name) {
	$set(this, val$name, val$name);
}

$Object* HTMLEditorKit$1::run() {
	$beforeCallerSensitive();
	$load($HTMLEditorKit);
	return $of($HTMLEditorKit::class$->getResourceAsStream(this->val$name));
}

HTMLEditorKit$1::HTMLEditorKit$1() {
}

$Class* HTMLEditorKit$1::load$($String* name, bool initialize) {
	$loadClass(HTMLEditorKit$1, name, initialize, &_HTMLEditorKit$1_ClassInfo_, allocate$HTMLEditorKit$1);
	return class$;
}

$Class* HTMLEditorKit$1::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax
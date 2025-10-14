#include <javax/swing/text/html/parser/ParserDelegator$1.h>

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
#include <javax/swing/text/html/parser/ParserDelegator.h>
#include <jcpp.h>

using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $ParserDelegator = ::javax::swing::text::html::parser::ParserDelegator;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {
				namespace parser {

$FieldInfo _ParserDelegator$1_FieldInfo_[] = {
	{"val$name", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(ParserDelegator$1, val$name)},
	{}
};

$MethodInfo _ParserDelegator$1_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", "()V", 0, $method(static_cast<void(ParserDelegator$1::*)($String*)>(&ParserDelegator$1::init$))},
	{"run", "()Ljava/io/InputStream;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _ParserDelegator$1_EnclosingMethodInfo_ = {
	"javax.swing.text.html.parser.ParserDelegator",
	"getResourceAsStream",
	"(Ljava/lang/String;)Ljava/io/InputStream;"
};

$InnerClassInfo _ParserDelegator$1_InnerClassesInfo_[] = {
	{"javax.swing.text.html.parser.ParserDelegator$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ParserDelegator$1_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.html.parser.ParserDelegator$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_ParserDelegator$1_FieldInfo_,
	_ParserDelegator$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/io/InputStream;>;",
	&_ParserDelegator$1_EnclosingMethodInfo_,
	_ParserDelegator$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.html.parser.ParserDelegator"
};

$Object* allocate$ParserDelegator$1($Class* clazz) {
	return $of($alloc(ParserDelegator$1));
}

void ParserDelegator$1::init$($String* val$name) {
	$set(this, val$name, val$name);
}

$Object* ParserDelegator$1::run() {
	$beforeCallerSensitive();
	$load($ParserDelegator);
	return $of($ParserDelegator::class$->getResourceAsStream(this->val$name));
}

ParserDelegator$1::ParserDelegator$1() {
}

$Class* ParserDelegator$1::load$($String* name, bool initialize) {
	$loadClass(ParserDelegator$1, name, initialize, &_ParserDelegator$1_ClassInfo_, allocate$ParserDelegator$1);
	return class$;
}

$Class* ParserDelegator$1::class$ = nullptr;

				} // parser
			} // html
		} // text
	} // swing
} // javax
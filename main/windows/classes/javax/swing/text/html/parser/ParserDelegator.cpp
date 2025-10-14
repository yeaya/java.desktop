#include <javax/swing/text/html/parser/ParserDelegator.h>

#include <java/io/BufferedInputStream.h>
#include <java/io/DataInputStream.h>
#include <java/io/FilterInputStream.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/PrintStream.h>
#include <java/io/Reader.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <javax/swing/text/html/HTMLEditorKit$Parser.h>
#include <javax/swing/text/html/HTMLEditorKit$ParserCallback.h>
#include <javax/swing/text/html/parser/DTD.h>
#include <javax/swing/text/html/parser/DocumentParser.h>
#include <javax/swing/text/html/parser/ParserDelegator$1.h>
#include <sun/awt/AppContext.h>
#include <jcpp.h>

#undef DTD_KEY

using $BufferedInputStream = ::java::io::BufferedInputStream;
using $DataInputStream = ::java::io::DataInputStream;
using $FilterInputStream = ::java::io::FilterInputStream;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $PrintStream = ::java::io::PrintStream;
using $Reader = ::java::io::Reader;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $HTMLEditorKit$Parser = ::javax::swing::text::html::HTMLEditorKit$Parser;
using $HTMLEditorKit$ParserCallback = ::javax::swing::text::html::HTMLEditorKit$ParserCallback;
using $DTD = ::javax::swing::text::html::parser::DTD;
using $DocumentParser = ::javax::swing::text::html::parser::DocumentParser;
using $ParserDelegator$1 = ::javax::swing::text::html::parser::ParserDelegator$1;
using $AppContext = ::sun::awt::AppContext;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {
				namespace parser {

$FieldInfo _ParserDelegator_FieldInfo_[] = {
	{"DTD_KEY", "Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ParserDelegator, DTD_KEY)},
	{}
};

$MethodInfo _ParserDelegator_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ParserDelegator::*)()>(&ParserDelegator::init$))},
	{"createDTD", "(Ljavax/swing/text/html/parser/DTD;Ljava/lang/String;)Ljavax/swing/text/html/parser/DTD;", nullptr, $PROTECTED | $STATIC, $method(static_cast<$DTD*(*)($DTD*,$String*)>(&ParserDelegator::createDTD))},
	{"getDefaultDTD", "()Ljavax/swing/text/html/parser/DTD;", nullptr, $PRIVATE | $STATIC | $SYNCHRONIZED, $method(static_cast<$DTD*(*)()>(&ParserDelegator::getDefaultDTD))},
	{"getResourceAsStream", "(Ljava/lang/String;)Ljava/io/InputStream;", nullptr, $STATIC, $method(static_cast<$InputStream*(*)($String*)>(&ParserDelegator::getResourceAsStream))},
	{"parse", "(Ljava/io/Reader;Ljavax/swing/text/html/HTMLEditorKit$ParserCallback;Z)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(ParserDelegator::*)($ObjectInputStream*)>(&ParserDelegator::readObject)), "java.lang.ClassNotFoundException,java.io.IOException"},
	{"setDefaultDTD", "()V", nullptr, $PROTECTED | $STATIC, $method(static_cast<void(*)()>(&ParserDelegator::setDefaultDTD))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ParserDelegator_InnerClassesInfo_[] = {
	{"javax.swing.text.html.HTMLEditorKit$Parser", "javax.swing.text.html.HTMLEditorKit", "Parser", $PUBLIC | $STATIC | $ABSTRACT},
	{"javax.swing.text.html.parser.ParserDelegator$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ParserDelegator_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.text.html.parser.ParserDelegator",
	"javax.swing.text.html.HTMLEditorKit$Parser",
	"java.io.Serializable",
	_ParserDelegator_FieldInfo_,
	_ParserDelegator_MethodInfo_,
	nullptr,
	nullptr,
	_ParserDelegator_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.text.html.parser.ParserDelegator$1"
};

$Object* allocate$ParserDelegator($Class* clazz) {
	return $of($alloc(ParserDelegator));
}

int32_t ParserDelegator::hashCode() {
	 return this->$HTMLEditorKit$Parser::hashCode();
}

bool ParserDelegator::equals(Object$* arg0) {
	 return this->$HTMLEditorKit$Parser::equals(arg0);
}

$Object* ParserDelegator::clone() {
	 return this->$HTMLEditorKit$Parser::clone();
}

$String* ParserDelegator::toString() {
	 return this->$HTMLEditorKit$Parser::toString();
}

void ParserDelegator::finalize() {
	this->$HTMLEditorKit$Parser::finalize();
}

$Object* ParserDelegator::DTD_KEY = nullptr;

void ParserDelegator::setDefaultDTD() {
	$init(ParserDelegator);
	getDefaultDTD();
}

$DTD* ParserDelegator::getDefaultDTD() {
	$load(ParserDelegator);
	$synchronized(class$) {
		$init(ParserDelegator);
		$var($AppContext, appContext, $AppContext::getAppContext());
		$var($DTD, dtd, $cast($DTD, $nc(appContext)->get(ParserDelegator::DTD_KEY)));
		if (dtd == nullptr) {
			$var($DTD, _dtd, nullptr);
			$var($String, nm, "html32"_s);
			try {
				$assign(_dtd, $DTD::getDTD(nm));
			} catch ($IOException&) {
				$var($IOException, e, $catch());
				$init($System);
				$nc($System::out)->println($$str({"Throw an exception: could not get default dtd: "_s, nm}));
			}
			$assign(dtd, createDTD(_dtd, nm));
			appContext->put(ParserDelegator::DTD_KEY, dtd);
		}
		return dtd;
	}
}

$DTD* ParserDelegator::createDTD($DTD* dtd, $String* name) {
	$init(ParserDelegator);
	$var($InputStream, in, nullptr);
	bool debug = true;
	try {
		$var($String, path, $str({name, ".bdtd"_s}));
		$assign(in, getResourceAsStream(path));
		if (in != nullptr) {
			$nc(dtd)->read($$new($DataInputStream, $$new($BufferedInputStream, in)));
			$DTD::putDTDHash(name, dtd);
		}
	} catch ($Exception&) {
		$var($Exception, e, $catch());
		$init($System);
		$nc($System::out)->println($of(e));
	}
	return dtd;
}

void ParserDelegator::init$() {
	$HTMLEditorKit$Parser::init$();
	setDefaultDTD();
}

void ParserDelegator::parse($Reader* r, $HTMLEditorKit$ParserCallback* cb, bool ignoreCharSet) {
	$$new($DocumentParser, $(getDefaultDTD()))->parse(r, cb, ignoreCharSet);
}

$InputStream* ParserDelegator::getResourceAsStream($String* name) {
	$init(ParserDelegator);
	$beforeCallerSensitive();
	return $cast($InputStream, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($ParserDelegator$1, name))));
}

void ParserDelegator::readObject($ObjectInputStream* s) {
	$nc(s)->defaultReadObject();
	setDefaultDTD();
}

void clinit$ParserDelegator($Class* class$) {
	$assignStatic(ParserDelegator::DTD_KEY, $new($Object));
}

ParserDelegator::ParserDelegator() {
}

$Class* ParserDelegator::load$($String* name, bool initialize) {
	$loadClass(ParserDelegator, name, initialize, &_ParserDelegator_ClassInfo_, clinit$ParserDelegator, allocate$ParserDelegator);
	return class$;
}

$Class* ParserDelegator::class$ = nullptr;

				} // parser
			} // html
		} // text
	} // swing
} // javax
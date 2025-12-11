#include <com/sun/beans/decoder/DocumentHandler$1.h>

#include <com/sun/beans/decoder/DocumentHandler.h>
#include <java/io/IOException.h>
#include <javax/xml/parsers/ParserConfigurationException.h>
#include <javax/xml/parsers/SAXParser.h>
#include <javax/xml/parsers/SAXParserFactory.h>
#include <org/xml/sax/InputSource.h>
#include <org/xml/sax/SAXException.h>
#include <org/xml/sax/helpers/DefaultHandler.h>
#include <jcpp.h>

using $DocumentHandler = ::com::sun::beans::decoder::DocumentHandler;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ParserConfigurationException = ::javax::xml::parsers::ParserConfigurationException;
using $SAXParser = ::javax::xml::parsers::SAXParser;
using $SAXParserFactory = ::javax::xml::parsers::SAXParserFactory;
using $InputSource = ::org::xml::sax::InputSource;
using $SAXException = ::org::xml::sax::SAXException;
using $DefaultHandler = ::org::xml::sax::helpers::DefaultHandler;

namespace com {
	namespace sun {
		namespace beans {
			namespace decoder {

$FieldInfo _DocumentHandler$1_FieldInfo_[] = {
	{"this$0", "Lcom/sun/beans/decoder/DocumentHandler;", nullptr, $FINAL | $SYNTHETIC, $field(DocumentHandler$1, this$0)},
	{"val$input", "Lorg/xml/sax/InputSource;", nullptr, $FINAL | $SYNTHETIC, $field(DocumentHandler$1, val$input)},
	{}
};

$MethodInfo _DocumentHandler$1_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/beans/decoder/DocumentHandler;Lorg/xml/sax/InputSource;)V", "()V", 0, $method(static_cast<void(DocumentHandler$1::*)($DocumentHandler*,$InputSource*)>(&DocumentHandler$1::init$))},
	{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _DocumentHandler$1_EnclosingMethodInfo_ = {
	"com.sun.beans.decoder.DocumentHandler",
	"parse",
	"(Lorg/xml/sax/InputSource;)V"
};

$InnerClassInfo _DocumentHandler$1_InnerClassesInfo_[] = {
	{"com.sun.beans.decoder.DocumentHandler$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _DocumentHandler$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.beans.decoder.DocumentHandler$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_DocumentHandler$1_FieldInfo_,
	_DocumentHandler$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Void;>;",
	&_DocumentHandler$1_EnclosingMethodInfo_,
	_DocumentHandler$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.beans.decoder.DocumentHandler"
};

$Object* allocate$DocumentHandler$1($Class* clazz) {
	return $of($alloc(DocumentHandler$1));
}

void DocumentHandler$1::init$($DocumentHandler* this$0, $InputSource* val$input) {
	$set(this, this$0, this$0);
	$set(this, val$input, val$input);
}

$Object* DocumentHandler$1::run() {
	$useLocalCurrentObjectStackCache();
	try {
		$nc($($nc($($SAXParserFactory::newInstance()))->newSAXParser()))->parse(this->val$input, static_cast<$DefaultHandler*>(this->this$0));
	} catch ($ParserConfigurationException& exception) {
		this->this$0->handleException(exception);
	} catch ($SAXException& wrapper) {
		$var($Exception, exception, wrapper->getException());
		if (exception == nullptr) {
			$assign(exception, wrapper);
		}
		this->this$0->handleException(exception);
	} catch ($IOException& exception) {
		this->this$0->handleException(exception);
	}
	return $of(nullptr);
}

DocumentHandler$1::DocumentHandler$1() {
}

$Class* DocumentHandler$1::load$($String* name, bool initialize) {
	$loadClass(DocumentHandler$1, name, initialize, &_DocumentHandler$1_ClassInfo_, allocate$DocumentHandler$1);
	return class$;
}

$Class* DocumentHandler$1::class$ = nullptr;

			} // decoder
		} // beans
	} // sun
} // com
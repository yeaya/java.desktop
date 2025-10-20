#include <java/beans/XMLDecoder.h>

#include <com/sun/beans/decoder/DocumentHandler.h>
#include <java/beans/ExceptionListener.h>
#include <java/beans/Statement.h>
#include <java/beans/XMLDecoder$1.h>
#include <java/io/Closeable.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/Reader.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/SecurityException.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/AccessControlContext.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <org/xml/sax/InputSource.h>
#include <org/xml/sax/helpers/DefaultHandler.h>
#include <jcpp.h>

using $DocumentHandler = ::com::sun::beans::decoder::DocumentHandler;
using $ExceptionListener = ::java::beans::ExceptionListener;
using $Statement = ::java::beans::Statement;
using $XMLDecoder$1 = ::java::beans::XMLDecoder$1;
using $Closeable = ::java::io::Closeable;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $Reader = ::java::io::Reader;
using $AutoCloseable = ::java::lang::AutoCloseable;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecurityException = ::java::lang::SecurityException;
using $SecurityManager = ::java::lang::SecurityManager;
using $AccessControlContext = ::java::security::AccessControlContext;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $InputSource = ::org::xml::sax::InputSource;
using $DefaultHandler = ::org::xml::sax::helpers::DefaultHandler;

namespace java {
	namespace beans {

$FieldInfo _XMLDecoder_FieldInfo_[] = {
	{"acc", "Ljava/security/AccessControlContext;", nullptr, $PRIVATE | $FINAL, $field(XMLDecoder, acc)},
	{"handler", "Lcom/sun/beans/decoder/DocumentHandler;", nullptr, $PRIVATE | $FINAL, $field(XMLDecoder, handler)},
	{"input", "Lorg/xml/sax/InputSource;", nullptr, $PRIVATE | $FINAL, $field(XMLDecoder, input)},
	{"owner", "Ljava/lang/Object;", nullptr, $PRIVATE, $field(XMLDecoder, owner)},
	{"array", "[Ljava/lang/Object;", nullptr, $PRIVATE, $field(XMLDecoder, array)},
	{"index", "I", nullptr, $PRIVATE, $field(XMLDecoder, index)},
	{}
};

$MethodInfo _XMLDecoder_MethodInfo_[] = {
	{"<init>", "(Ljava/io/InputStream;)V", nullptr, $PUBLIC, $method(static_cast<void(XMLDecoder::*)($InputStream*)>(&XMLDecoder::init$))},
	{"<init>", "(Ljava/io/InputStream;Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(XMLDecoder::*)($InputStream*,Object$*)>(&XMLDecoder::init$))},
	{"<init>", "(Ljava/io/InputStream;Ljava/lang/Object;Ljava/beans/ExceptionListener;)V", nullptr, $PUBLIC, $method(static_cast<void(XMLDecoder::*)($InputStream*,Object$*,$ExceptionListener*)>(&XMLDecoder::init$))},
	{"<init>", "(Ljava/io/InputStream;Ljava/lang/Object;Ljava/beans/ExceptionListener;Ljava/lang/ClassLoader;)V", nullptr, $PUBLIC, $method(static_cast<void(XMLDecoder::*)($InputStream*,Object$*,$ExceptionListener*,$ClassLoader*)>(&XMLDecoder::init$))},
	{"<init>", "(Lorg/xml/sax/InputSource;)V", nullptr, $PUBLIC, $method(static_cast<void(XMLDecoder::*)($InputSource*)>(&XMLDecoder::init$))},
	{"<init>", "(Lorg/xml/sax/InputSource;Ljava/lang/Object;Ljava/beans/ExceptionListener;Ljava/lang/ClassLoader;)V", nullptr, $PRIVATE, $method(static_cast<void(XMLDecoder::*)($InputSource*,Object$*,$ExceptionListener*,$ClassLoader*)>(&XMLDecoder::init$))},
	{"close", "()V", nullptr, $PUBLIC},
	{"close", "(Ljava/io/Closeable;)V", nullptr, $PRIVATE, $method(static_cast<void(XMLDecoder::*)($Closeable*)>(&XMLDecoder::close))},
	{"createHandler", "(Ljava/lang/Object;Ljava/beans/ExceptionListener;Ljava/lang/ClassLoader;)Lorg/xml/sax/helpers/DefaultHandler;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$DefaultHandler*(*)(Object$*,$ExceptionListener*,$ClassLoader*)>(&XMLDecoder::createHandler))},
	{"getExceptionListener", "()Ljava/beans/ExceptionListener;", nullptr, $PUBLIC},
	{"getOwner", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"parsingComplete", "()Z", nullptr, $PRIVATE, $method(static_cast<bool(XMLDecoder::*)()>(&XMLDecoder::parsingComplete))},
	{"readObject", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"setExceptionListener", "(Ljava/beans/ExceptionListener;)V", nullptr, $PUBLIC},
	{"setOwner", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _XMLDecoder_InnerClassesInfo_[] = {
	{"java.beans.XMLDecoder$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _XMLDecoder_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.beans.XMLDecoder",
	"java.lang.Object",
	"java.lang.AutoCloseable",
	_XMLDecoder_FieldInfo_,
	_XMLDecoder_MethodInfo_,
	nullptr,
	nullptr,
	_XMLDecoder_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.beans.XMLDecoder$1"
};

$Object* allocate$XMLDecoder($Class* clazz) {
	return $of($alloc(XMLDecoder));
}

void XMLDecoder::init$($InputStream* in) {
	XMLDecoder::init$(in, nullptr);
}

void XMLDecoder::init$($InputStream* in, Object$* owner) {
	XMLDecoder::init$(in, owner, nullptr);
}

void XMLDecoder::init$($InputStream* in, Object$* owner, $ExceptionListener* exceptionListener) {
	XMLDecoder::init$(in, owner, exceptionListener, ($ClassLoader*)nullptr);
}

void XMLDecoder::init$($InputStream* in, Object$* owner, $ExceptionListener* exceptionListener, $ClassLoader* cl) {
	XMLDecoder::init$($$new($InputSource, in), owner, exceptionListener, cl);
}

void XMLDecoder::init$($InputSource* is) {
	XMLDecoder::init$(is, ($Object*)nullptr, ($ExceptionListener*)nullptr, ($ClassLoader*)nullptr);
}

void XMLDecoder::init$($InputSource* is, Object$* owner, $ExceptionListener* el, $ClassLoader* cl) {
	$set(this, acc, $AccessController::getContext());
	$set(this, handler, $new($DocumentHandler));
	$set(this, input, is);
	$set(this, owner, owner);
	setExceptionListener(el);
	$nc(this->handler)->setClassLoader(cl);
	$nc(this->handler)->setOwner(this);
}

void XMLDecoder::close() {
	$useLocalCurrentObjectStackCache();
	if (parsingComplete()) {
		close($($nc(this->input)->getCharacterStream()));
		close($($nc(this->input)->getByteStream()));
	}
}

void XMLDecoder::close($Closeable* in) {
	$useLocalCurrentObjectStackCache();
	if (in != nullptr) {
		try {
			in->close();
		} catch ($IOException&) {
			$var($IOException, e, $catch());
			$nc($(getExceptionListener()))->exceptionThrown(e);
		}
	}
}

bool XMLDecoder::parsingComplete() {
	$beforeCallerSensitive();
	if (this->input == nullptr) {
		return false;
	}
	if (this->array == nullptr) {
		if ((this->acc == nullptr) && (nullptr != $System::getSecurityManager())) {
			$throwNew($SecurityException, "AccessControlContext is not set"_s);
		}
		$AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($XMLDecoder$1, this)), this->acc);
		$set(this, array, $nc(this->handler)->getObjects());
	}
	return true;
}

void XMLDecoder::setExceptionListener($ExceptionListener* exceptionListener$renamed) {
	$var($ExceptionListener, exceptionListener, exceptionListener$renamed);
	if (exceptionListener == nullptr) {
		$init($Statement);
		$assign(exceptionListener, $Statement::defaultExceptionListener);
	}
	$nc(this->handler)->setExceptionListener(exceptionListener);
}

$ExceptionListener* XMLDecoder::getExceptionListener() {
	return $nc(this->handler)->getExceptionListener();
}

$Object* XMLDecoder::readObject() {
	return $of((parsingComplete()) ? $nc(this->array)->get(this->index++) : ($Object*)nullptr);
}

void XMLDecoder::setOwner(Object$* owner) {
	$set(this, owner, owner);
}

$Object* XMLDecoder::getOwner() {
	return $of(this->owner);
}

$DefaultHandler* XMLDecoder::createHandler(Object$* owner, $ExceptionListener* el, $ClassLoader* cl) {
	$init(XMLDecoder);
	$var($DocumentHandler, handler, $new($DocumentHandler));
	handler->setOwner(owner);
	handler->setExceptionListener(el);
	handler->setClassLoader(cl);
	return handler;
}

XMLDecoder::XMLDecoder() {
}

$Class* XMLDecoder::load$($String* name, bool initialize) {
	$loadClass(XMLDecoder, name, initialize, &_XMLDecoder_ClassInfo_, allocate$XMLDecoder);
	return class$;
}

$Class* XMLDecoder::class$ = nullptr;

	} // beans
} // java
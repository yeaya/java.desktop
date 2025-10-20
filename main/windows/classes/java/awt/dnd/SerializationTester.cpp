#include <java/awt/dnd/SerializationTester.h>

#include <java/awt/dnd/SerializationTester$1.h>
#include <java/io/IOException.h>
#include <java/io/ObjectOutputStream.h>
#include <java/io/OutputStream.h>
#include <java/io/Serializable.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $SerializationTester$1 = ::java::awt::dnd::SerializationTester$1;
using $IOException = ::java::io::IOException;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $OutputStream = ::java::io::OutputStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace dnd {

$FieldInfo _SerializationTester_FieldInfo_[] = {
	{"stream", "Ljava/io/ObjectOutputStream;", nullptr, $PRIVATE | $STATIC, $staticField(SerializationTester, stream)},
	{}
};

$MethodInfo _SerializationTester_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(SerializationTester::*)()>(&SerializationTester::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $STATIC, $method(static_cast<bool(*)(Object$*)>(&SerializationTester::test))},
	{}
};

$InnerClassInfo _SerializationTester_InnerClassesInfo_[] = {
	{"java.awt.dnd.SerializationTester$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SerializationTester_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.awt.dnd.SerializationTester",
	"java.lang.Object",
	nullptr,
	_SerializationTester_FieldInfo_,
	_SerializationTester_MethodInfo_,
	nullptr,
	nullptr,
	_SerializationTester_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.awt.dnd.SerializationTester$1"
};

$Object* allocate$SerializationTester($Class* clazz) {
	return $of($alloc(SerializationTester));
}

$ObjectOutputStream* SerializationTester::stream = nullptr;

bool SerializationTester::test(Object$* obj) {
	$init(SerializationTester);
	$useLocalCurrentObjectStackCache();
	if (!($instanceOf($Serializable, obj))) {
		return false;
	}
	{
		$var($Throwable, var$0, nullptr);
		bool var$2 = false;
		bool return$1 = false;
		try {
			try {
				$nc(SerializationTester::stream)->writeObject(obj);
			} catch ($IOException&) {
				$var($IOException, e, $catch());
				var$2 = false;
				return$1 = true;
				goto $finally;
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} $finally: {
			try {
				$nc(SerializationTester::stream)->reset();
			} catch ($IOException&) {
				$catch();
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	return true;
}

void SerializationTester::init$() {
}

void clinit$SerializationTester($Class* class$) {
	{
		try {
			$assignStatic(SerializationTester::stream, $new($ObjectOutputStream, $$new($SerializationTester$1)));
		} catch ($IOException&) {
			$catch();
		}
	}
}

SerializationTester::SerializationTester() {
}

$Class* SerializationTester::load$($String* name, bool initialize) {
	$loadClass(SerializationTester, name, initialize, &_SerializationTester_ClassInfo_, clinit$SerializationTester, allocate$SerializationTester);
	return class$;
}

$Class* SerializationTester::class$ = nullptr;

		} // dnd
	} // awt
} // java
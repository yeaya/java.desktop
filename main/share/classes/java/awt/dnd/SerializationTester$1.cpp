#include <java/awt/dnd/SerializationTester$1.h>

#include <java/awt/dnd/SerializationTester.h>
#include <java/io/OutputStream.h>
#include <jcpp.h>

using $SerializationTester = ::java::awt::dnd::SerializationTester;
using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace dnd {

$MethodInfo _SerializationTester$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(SerializationTester$1::*)()>(&SerializationTester$1::init$))},
	{"write", "(I)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _SerializationTester$1_EnclosingMethodInfo_ = {
	"java.awt.dnd.SerializationTester",
	nullptr,
	nullptr
};

$InnerClassInfo _SerializationTester$1_InnerClassesInfo_[] = {
	{"java.awt.dnd.SerializationTester$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SerializationTester$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.awt.dnd.SerializationTester$1",
	"java.io.OutputStream",
	nullptr,
	nullptr,
	_SerializationTester$1_MethodInfo_,
	nullptr,
	&_SerializationTester$1_EnclosingMethodInfo_,
	_SerializationTester$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.dnd.SerializationTester"
};

$Object* allocate$SerializationTester$1($Class* clazz) {
	return $of($alloc(SerializationTester$1));
}

void SerializationTester$1::init$() {
	$OutputStream::init$();
}

void SerializationTester$1::write(int32_t b) {
}

SerializationTester$1::SerializationTester$1() {
}

$Class* SerializationTester$1::load$($String* name, bool initialize) {
	$loadClass(SerializationTester$1, name, initialize, &_SerializationTester$1_ClassInfo_, allocate$SerializationTester$1);
	return class$;
}

$Class* SerializationTester$1::class$ = nullptr;

		} // dnd
	} // awt
} // java
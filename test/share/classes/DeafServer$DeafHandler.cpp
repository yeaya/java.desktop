#include <DeafServer$DeafHandler.h>

#include <DeafServer.h>
#include <com/sun/net/httpserver/HttpExchange.h>
#include <java/lang/InterruptedException.h>
#include <jcpp.h>

using $DeafServer = ::DeafServer;
using $HttpExchange = ::com::sun::net::httpserver::HttpExchange;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _DeafServer$DeafHandler_FieldInfo_[] = {
	{"this$0", "LDeafServer;", nullptr, $FINAL | $SYNTHETIC, $field(DeafServer$DeafHandler, this$0)},
	{}
};

$MethodInfo _DeafServer$DeafHandler_MethodInfo_[] = {
	{"<init>", "(LDeafServer;)V", nullptr, 0, $method(static_cast<void(DeafServer$DeafHandler::*)($DeafServer*)>(&DeafServer$DeafHandler::init$))},
	{"handle", "(Lcom/sun/net/httpserver/HttpExchange;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _DeafServer$DeafHandler_InnerClassesInfo_[] = {
	{"DeafServer$DeafHandler", "DeafServer", "DeafHandler", 0},
	{}
};

$ClassInfo _DeafServer$DeafHandler_ClassInfo_ = {
	$ACC_SUPER,
	"DeafServer$DeafHandler",
	"java.lang.Object",
	"com.sun.net.httpserver.HttpHandler",
	_DeafServer$DeafHandler_FieldInfo_,
	_DeafServer$DeafHandler_MethodInfo_,
	nullptr,
	nullptr,
	_DeafServer$DeafHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"DeafServer"
};

$Object* allocate$DeafServer$DeafHandler($Class* clazz) {
	return $of($alloc(DeafServer$DeafHandler));
}

void DeafServer$DeafHandler::init$($DeafServer* this$0) {
	$set(this, this$0, this$0);
}

void DeafServer$DeafHandler::handle($HttpExchange* r) {
	$synchronized(this->this$0) {
		while (!this->this$0->wakeup) {
			try {
				$of(this->this$0)->wait();
			} catch ($InterruptedException& e) {
			}
		}
	}
}

DeafServer$DeafHandler::DeafServer$DeafHandler() {
}

$Class* DeafServer$DeafHandler::load$($String* name, bool initialize) {
	$loadClass(DeafServer$DeafHandler, name, initialize, &_DeafServer$DeafHandler_ClassInfo_, allocate$DeafServer$DeafHandler);
	return class$;
}

$Class* DeafServer$DeafHandler::class$ = nullptr;
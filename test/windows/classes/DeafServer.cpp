#include <DeafServer.h>

#include <DeafServer$DeafHandler.h>
#include <com/sun/net/httpserver/HttpContext.h>
#include <com/sun/net/httpserver/HttpHandler.h>
#include <com/sun/net/httpserver/HttpServer.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/InetSocketAddress.h>
#include <java/util/concurrent/Executor.h>
#include <java/util/concurrent/ExecutorService.h>
#include <java/util/concurrent/Executors.h>
#include <jcpp.h>

using $DeafServer$DeafHandler = ::DeafServer$DeafHandler;
using $HttpContext = ::com::sun::net::httpserver::HttpContext;
using $HttpHandler = ::com::sun::net::httpserver::HttpHandler;
using $HttpServer = ::com::sun::net::httpserver::HttpServer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $Executor = ::java::util::concurrent::Executor;
using $ExecutorService = ::java::util::concurrent::ExecutorService;
using $Executors = ::java::util::concurrent::Executors;

$FieldInfo _DeafServer_FieldInfo_[] = {
	{"server", "Lcom/sun/net/httpserver/HttpServer;", nullptr, 0, $field(DeafServer, server)},
	{"wakeup", "Z", nullptr, 0, $field(DeafServer, wakeup)},
	{}
};

$MethodInfo _DeafServer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DeafServer::*)()>(&DeafServer::init$)), "java.io.IOException"},
	{"destroy", "()V", nullptr, $PUBLIC},
	{"getPort", "()I", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DeafServer_InnerClassesInfo_[] = {
	{"DeafServer$DeafHandler", "DeafServer", "DeafHandler", 0},
	{}
};

$ClassInfo _DeafServer_ClassInfo_ = {
	$ACC_SUPER,
	"DeafServer",
	"java.lang.Object",
	nullptr,
	_DeafServer_FieldInfo_,
	_DeafServer_MethodInfo_,
	nullptr,
	nullptr,
	_DeafServer_InnerClassesInfo_,
	nullptr,
	nullptr,
	"DeafServer$DeafHandler"
};

$Object* allocate$DeafServer($Class* clazz) {
	return $of($alloc(DeafServer));
}

void DeafServer::init$() {
	this->wakeup = false;
	$var($InetSocketAddress, addr, $new($InetSocketAddress, 0));
	$set(this, server, $HttpServer::create(addr, 0));
	$var($HttpHandler, handler, $new($DeafServer$DeafHandler, this));
	$nc(this->server)->createContext("/"_s, handler);
	$nc(this->server)->setExecutor($($Executors::newCachedThreadPool()));
	$nc(this->server)->start();
}

void DeafServer::destroy() {
	$nc(this->server)->stop(0);
}

int32_t DeafServer::getPort() {
	return $nc($($nc(this->server)->getAddress()))->getPort();
}

DeafServer::DeafServer() {
}

$Class* DeafServer::load$($String* name, bool initialize) {
	$loadClass(DeafServer, name, initialize, &_DeafServer_ClassInfo_, allocate$DeafServer);
	return class$;
}

$Class* DeafServer::class$ = nullptr;
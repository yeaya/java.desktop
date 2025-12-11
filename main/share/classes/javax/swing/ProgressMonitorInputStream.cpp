#include <javax/swing/ProgressMonitorInputStream.h>

#include <java/awt/Component.h>
#include <java/io/FilterInputStream.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/InterruptedIOException.h>
#include <javax/swing/ProgressMonitor.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $FilterInputStream = ::java::io::FilterInputStream;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $InterruptedIOException = ::java::io::InterruptedIOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ProgressMonitor = ::javax::swing::ProgressMonitor;

namespace javax {
	namespace swing {

$FieldInfo _ProgressMonitorInputStream_FieldInfo_[] = {
	{"monitor", "Ljavax/swing/ProgressMonitor;", nullptr, $PRIVATE, $field(ProgressMonitorInputStream, monitor)},
	{"nread", "I", nullptr, $PRIVATE, $field(ProgressMonitorInputStream, nread)},
	{"size", "I", nullptr, $PRIVATE, $field(ProgressMonitorInputStream, size)},
	{}
};

$MethodInfo _ProgressMonitorInputStream_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/Component;Ljava/lang/Object;Ljava/io/InputStream;)V", nullptr, $PUBLIC, $method(static_cast<void(ProgressMonitorInputStream::*)($Component*,Object$*,$InputStream*)>(&ProgressMonitorInputStream::init$))},
	{"close", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getProgressMonitor", "()Ljavax/swing/ProgressMonitor;", nullptr, $PUBLIC},
	{"read", "()I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"read", "([B)I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"read", "([BII)I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"reset", "()V", nullptr, $PUBLIC | $SYNCHRONIZED, nullptr, "java.io.IOException"},
	{"skip", "(J)J", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$ClassInfo _ProgressMonitorInputStream_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.ProgressMonitorInputStream",
	"java.io.FilterInputStream",
	nullptr,
	_ProgressMonitorInputStream_FieldInfo_,
	_ProgressMonitorInputStream_MethodInfo_
};

$Object* allocate$ProgressMonitorInputStream($Class* clazz) {
	return $of($alloc(ProgressMonitorInputStream));
}

void ProgressMonitorInputStream::init$($Component* parentComponent, Object$* message, $InputStream* in) {
	$FilterInputStream::init$(in);
	this->nread = 0;
	this->size = 0;
	try {
		this->size = $nc(in)->available();
	} catch ($IOException& ioe) {
		this->size = 0;
	}
	$set(this, monitor, $new($ProgressMonitor, parentComponent, message, nullptr, 0, this->size));
}

$ProgressMonitor* ProgressMonitorInputStream::getProgressMonitor() {
	return this->monitor;
}

int32_t ProgressMonitorInputStream::read() {
	int32_t c = $nc(this->in)->read();
	if (c >= 0) {
		$nc(this->monitor)->setProgress(++this->nread);
	}
	if ($nc(this->monitor)->isCanceled()) {
		$var($InterruptedIOException, exc, $new($InterruptedIOException, "progress"_s));
		exc->bytesTransferred = this->nread;
		$throw(exc);
	}
	return c;
}

int32_t ProgressMonitorInputStream::read($bytes* b) {
	int32_t nr = $nc(this->in)->read(b);
	if (nr > 0) {
		$nc(this->monitor)->setProgress(this->nread += nr);
	}
	if ($nc(this->monitor)->isCanceled()) {
		$var($InterruptedIOException, exc, $new($InterruptedIOException, "progress"_s));
		exc->bytesTransferred = this->nread;
		$throw(exc);
	}
	return nr;
}

int32_t ProgressMonitorInputStream::read($bytes* b, int32_t off, int32_t len) {
	int32_t nr = $nc(this->in)->read(b, off, len);
	if (nr > 0) {
		$nc(this->monitor)->setProgress(this->nread += nr);
	}
	if ($nc(this->monitor)->isCanceled()) {
		$var($InterruptedIOException, exc, $new($InterruptedIOException, "progress"_s));
		exc->bytesTransferred = this->nread;
		$throw(exc);
	}
	return nr;
}

int64_t ProgressMonitorInputStream::skip(int64_t n) {
	int64_t nr = $nc(this->in)->skip(n);
	if (nr > 0) {
		$nc(this->monitor)->setProgress(this->nread += nr);
	}
	return nr;
}

void ProgressMonitorInputStream::close() {
	$nc(this->in)->close();
	$nc(this->monitor)->close();
}

void ProgressMonitorInputStream::reset() {
	$synchronized(this) {
		$nc(this->in)->reset();
		this->nread = this->size - $nc(this->in)->available();
		$nc(this->monitor)->setProgress(this->nread);
	}
}

ProgressMonitorInputStream::ProgressMonitorInputStream() {
}

$Class* ProgressMonitorInputStream::load$($String* name, bool initialize) {
	$loadClass(ProgressMonitorInputStream, name, initialize, &_ProgressMonitorInputStream_ClassInfo_, allocate$ProgressMonitorInputStream);
	return class$;
}

$Class* ProgressMonitorInputStream::class$ = nullptr;

	} // swing
} // javax
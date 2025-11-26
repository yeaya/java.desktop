#ifndef _javax_print_StreamPrintService_h_
#define _javax_print_StreamPrintService_h_
//$ class javax.print.StreamPrintService
//$ extends javax.print.PrintService

#include <javax/print/PrintService.h>

namespace java {
	namespace io {
		class OutputStream;
	}
}

namespace javax {
	namespace print {

class $import StreamPrintService : public ::javax::print::PrintService {
	$class(StreamPrintService, $NO_CLASS_INIT, ::javax::print::PrintService)
public:
	StreamPrintService();
	void init$();
	void init$(::java::io::OutputStream* out);
	virtual void dispose();
	virtual $String* getOutputFormat() {return nullptr;}
	virtual ::java::io::OutputStream* getOutputStream();
	virtual bool isDisposed();
	::java::io::OutputStream* outStream = nullptr;
	bool disposed = false;
};

	} // print
} // javax

#endif // _javax_print_StreamPrintService_h_
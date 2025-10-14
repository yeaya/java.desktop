#include <sun/print/PSStreamPrintJob.h>

#include <java/awt/print/PageFormat.h>
#include <java/awt/print/Pageable.h>
#include <java/awt/print/Paper.h>
#include <java/awt/print/Printable.h>
#include <java/awt/print/PrinterException.h>
#include <java/awt/print/PrinterJob.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/Reader.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassCastException.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Double.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/SecurityException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/URL.h>
#include <java/util/Locale.h>
#include <java/util/Vector.h>
#include <javax/print/CancelablePrintJob.h>
#include <javax/print/Doc.h>
#include <javax/print/DocFlavor$BYTE_ARRAY.h>
#include <javax/print/DocFlavor$INPUT_STREAM.h>
#include <javax/print/DocFlavor$URL.h>
#include <javax/print/DocFlavor.h>
#include <javax/print/DocPrintJob.h>
#include <javax/print/PrintException.h>
#include <javax/print/PrintService.h>
#include <javax/print/StreamPrintService.h>
#include <javax/print/attribute/Attribute.h>
#include <javax/print/attribute/AttributeSet.h>
#include <javax/print/attribute/AttributeSetUtilities.h>
#include <javax/print/attribute/DocAttributeSet.h>
#include <javax/print/attribute/HashPrintJobAttributeSet.h>
#include <javax/print/attribute/HashPrintRequestAttributeSet.h>
#include <javax/print/attribute/PrintJobAttribute.h>
#include <javax/print/attribute/PrintJobAttributeSet.h>
#include <javax/print/attribute/PrintRequestAttribute.h>
#include <javax/print/attribute/PrintRequestAttributeSet.h>
#include <javax/print/attribute/standard/Copies.h>
#include <javax/print/attribute/standard/DocumentName.h>
#include <javax/print/attribute/standard/Fidelity.h>
#include <javax/print/attribute/standard/JobName.h>
#include <javax/print/attribute/standard/JobOriginatingUserName.h>
#include <javax/print/attribute/standard/Media.h>
#include <javax/print/attribute/standard/MediaSize$NA.h>
#include <javax/print/attribute/standard/MediaSize.h>
#include <javax/print/attribute/standard/MediaSizeName.h>
#include <javax/print/attribute/standard/OrientationRequested.h>
#include <javax/print/attribute/standard/RequestingUserName.h>
#include <javax/print/event/PrintJobAttributeListener.h>
#include <javax/print/event/PrintJobEvent.h>
#include <javax/print/event/PrintJobListener.h>
#include <sun/print/ImagePrinter.h>
#include <sun/print/PSPrinterJob.h>
#include <sun/print/PSStreamPrintService.h>
#include <sun/print/PrintJobAttributeException.h>
#include <sun/print/PrintJobFlavorException.h>
#include <sun/print/RasterPrinterJob.h>
#include <jcpp.h>

#undef DATA_TRANSFER_COMPLETE
#undef FIDELITY_TRUE
#undef GIF
#undef INCH
#undef JOB_CANCELED
#undef JOB_COMPLETE
#undef JOB_FAILED
#undef JPEG
#undef LANDSCAPE
#undef LETTER
#undef NO_MORE_EVENTS
#undef PNG
#undef PORTRAIT
#undef REVERSE_LANDSCAPE

using $AttributeArray = $Array<::javax::print::attribute::Attribute>;
using $PageFormat = ::java::awt::print::PageFormat;
using $Pageable = ::java::awt::print::Pageable;
using $Paper = ::java::awt::print::Paper;
using $Printable = ::java::awt::print::Printable;
using $PrinterException = ::java::awt::print::PrinterException;
using $PrinterJob = ::java::awt::print::PrinterJob;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $Reader = ::java::io::Reader;
using $ClassCastException = ::java::lang::ClassCastException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $SecurityException = ::java::lang::SecurityException;
using $URL = ::java::net::URL;
using $Locale = ::java::util::Locale;
using $Vector = ::java::util::Vector;
using $CancelablePrintJob = ::javax::print::CancelablePrintJob;
using $Doc = ::javax::print::Doc;
using $DocFlavor = ::javax::print::DocFlavor;
using $DocFlavor$BYTE_ARRAY = ::javax::print::DocFlavor$BYTE_ARRAY;
using $DocFlavor$INPUT_STREAM = ::javax::print::DocFlavor$INPUT_STREAM;
using $DocFlavor$URL = ::javax::print::DocFlavor$URL;
using $DocPrintJob = ::javax::print::DocPrintJob;
using $PrintException = ::javax::print::PrintException;
using $PrintService = ::javax::print::PrintService;
using $StreamPrintService = ::javax::print::StreamPrintService;
using $Attribute = ::javax::print::attribute::Attribute;
using $AttributeSet = ::javax::print::attribute::AttributeSet;
using $AttributeSetUtilities = ::javax::print::attribute::AttributeSetUtilities;
using $DocAttributeSet = ::javax::print::attribute::DocAttributeSet;
using $HashPrintJobAttributeSet = ::javax::print::attribute::HashPrintJobAttributeSet;
using $HashPrintRequestAttributeSet = ::javax::print::attribute::HashPrintRequestAttributeSet;
using $IntegerSyntax = ::javax::print::attribute::IntegerSyntax;
using $PrintJobAttribute = ::javax::print::attribute::PrintJobAttribute;
using $PrintJobAttributeSet = ::javax::print::attribute::PrintJobAttributeSet;
using $PrintRequestAttribute = ::javax::print::attribute::PrintRequestAttribute;
using $PrintRequestAttributeSet = ::javax::print::attribute::PrintRequestAttributeSet;
using $Size2DSyntax = ::javax::print::attribute::Size2DSyntax;
using $TextSyntax = ::javax::print::attribute::TextSyntax;
using $Copies = ::javax::print::attribute::standard::Copies;
using $DocumentName = ::javax::print::attribute::standard::DocumentName;
using $Fidelity = ::javax::print::attribute::standard::Fidelity;
using $JobName = ::javax::print::attribute::standard::JobName;
using $JobOriginatingUserName = ::javax::print::attribute::standard::JobOriginatingUserName;
using $Media = ::javax::print::attribute::standard::Media;
using $MediaSize = ::javax::print::attribute::standard::MediaSize;
using $MediaSize$NA = ::javax::print::attribute::standard::MediaSize$NA;
using $MediaSizeName = ::javax::print::attribute::standard::MediaSizeName;
using $OrientationRequested = ::javax::print::attribute::standard::OrientationRequested;
using $RequestingUserName = ::javax::print::attribute::standard::RequestingUserName;
using $PrintJobAttributeListener = ::javax::print::event::PrintJobAttributeListener;
using $PrintJobEvent = ::javax::print::event::PrintJobEvent;
using $PrintJobListener = ::javax::print::event::PrintJobListener;
using $ImagePrinter = ::sun::print::ImagePrinter;
using $PSPrinterJob = ::sun::print::PSPrinterJob;
using $PSStreamPrintService = ::sun::print::PSStreamPrintService;
using $PrintJobAttributeException = ::sun::print::PrintJobAttributeException;
using $PrintJobFlavorException = ::sun::print::PrintJobFlavorException;
using $RasterPrinterJob = ::sun::print::RasterPrinterJob;

namespace sun {
	namespace print {

$FieldInfo _PSStreamPrintJob_FieldInfo_[] = {
	{"jobListeners", "Ljava/util/Vector;", "Ljava/util/Vector<Ljavax/print/event/PrintJobListener;>;", $PRIVATE | $TRANSIENT, $field(PSStreamPrintJob, jobListeners)},
	{"attrListeners", "Ljava/util/Vector;", "Ljava/util/Vector<Ljavax/print/event/PrintJobAttributeListener;>;", $PRIVATE | $TRANSIENT, $field(PSStreamPrintJob, attrListeners)},
	{"listenedAttributeSets", "Ljava/util/Vector;", "Ljava/util/Vector<Ljavax/print/attribute/PrintJobAttributeSet;>;", $PRIVATE | $TRANSIENT, $field(PSStreamPrintJob, listenedAttributeSets)},
	{"service", "Lsun/print/PSStreamPrintService;", nullptr, $PRIVATE, $field(PSStreamPrintJob, service)},
	{"fidelity", "Z", nullptr, $PRIVATE, $field(PSStreamPrintJob, fidelity)},
	{"printing", "Z", nullptr, $PRIVATE, $field(PSStreamPrintJob, printing)},
	{"printReturned", "Z", nullptr, $PRIVATE, $field(PSStreamPrintJob, printReturned)},
	{"reqAttrSet", "Ljavax/print/attribute/PrintRequestAttributeSet;", nullptr, $PRIVATE, $field(PSStreamPrintJob, reqAttrSet)},
	{"jobAttrSet", "Ljavax/print/attribute/PrintJobAttributeSet;", nullptr, $PRIVATE, $field(PSStreamPrintJob, jobAttrSet)},
	{"job", "Ljava/awt/print/PrinterJob;", nullptr, $PRIVATE, $field(PSStreamPrintJob, job)},
	{"doc", "Ljavax/print/Doc;", nullptr, $PRIVATE, $field(PSStreamPrintJob, doc)},
	{"instream", "Ljava/io/InputStream;", nullptr, $PRIVATE, $field(PSStreamPrintJob, instream)},
	{"reader", "Ljava/io/Reader;", nullptr, $PRIVATE, $field(PSStreamPrintJob, reader)},
	{"jobName", "Ljava/lang/String;", nullptr, $PRIVATE, $field(PSStreamPrintJob, jobName)},
	{"copies", "I", nullptr, $PRIVATE, $field(PSStreamPrintJob, copies)},
	{"mediaSize", "Ljavax/print/attribute/standard/MediaSize;", nullptr, $PRIVATE, $field(PSStreamPrintJob, mediaSize)},
	{"orient", "Ljavax/print/attribute/standard/OrientationRequested;", nullptr, $PRIVATE, $field(PSStreamPrintJob, orient)},
	{}
};

$MethodInfo _PSStreamPrintJob_MethodInfo_[] = {
	{"<init>", "(Lsun/print/PSStreamPrintService;)V", nullptr, 0, $method(static_cast<void(PSStreamPrintJob::*)($PSStreamPrintService*)>(&PSStreamPrintJob::init$))},
	{"addPrintJobAttributeListener", "(Ljavax/print/event/PrintJobAttributeListener;Ljavax/print/attribute/PrintJobAttributeSet;)V", nullptr, $PUBLIC},
	{"addPrintJobListener", "(Ljavax/print/event/PrintJobListener;)V", nullptr, $PUBLIC},
	{"cancel", "()V", nullptr, $PUBLIC, nullptr, "javax.print.PrintException"},
	{"closeDataStreams", "()V", nullptr, $PRIVATE, $method(static_cast<void(PSStreamPrintJob::*)()>(&PSStreamPrintJob::closeDataStreams))},
	{"getAttributeValues", "(Ljavax/print/DocFlavor;)V", nullptr, $PRIVATE, $method(static_cast<void(PSStreamPrintJob::*)($DocFlavor*)>(&PSStreamPrintJob::getAttributeValues)), "javax.print.PrintException"},
	{"getAttributes", "()Ljavax/print/attribute/PrintJobAttributeSet;", nullptr, $PUBLIC},
	{"getPrintService", "()Ljavax/print/PrintService;", nullptr, $PUBLIC},
	{"initializeAttributeSets", "(Ljavax/print/Doc;Ljavax/print/attribute/PrintRequestAttributeSet;)V", nullptr, $PRIVATE | $SYNCHRONIZED, $method(static_cast<void(PSStreamPrintJob::*)($Doc*,$PrintRequestAttributeSet*)>(&PSStreamPrintJob::initializeAttributeSets))},
	{"notifyEvent", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(PSStreamPrintJob::*)(int32_t)>(&PSStreamPrintJob::notifyEvent))},
	{"pageableJob", "(Ljava/awt/print/Pageable;Ljavax/print/attribute/PrintRequestAttributeSet;)V", nullptr, $PUBLIC, nullptr, "javax.print.PrintException"},
	{"print", "(Ljavax/print/Doc;Ljavax/print/attribute/PrintRequestAttributeSet;)V", nullptr, $PUBLIC, nullptr, "javax.print.PrintException"},
	{"printableJob", "(Ljava/awt/print/Printable;Ljavax/print/attribute/PrintRequestAttributeSet;)V", nullptr, $PUBLIC, nullptr, "javax.print.PrintException"},
	{"removePrintJobAttributeListener", "(Ljavax/print/event/PrintJobAttributeListener;)V", nullptr, $PUBLIC},
	{"removePrintJobListener", "(Ljavax/print/event/PrintJobListener;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _PSStreamPrintJob_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.print.PSStreamPrintJob",
	"java.lang.Object",
	"javax.print.CancelablePrintJob",
	_PSStreamPrintJob_FieldInfo_,
	_PSStreamPrintJob_MethodInfo_
};

$Object* allocate$PSStreamPrintJob($Class* clazz) {
	return $of($alloc(PSStreamPrintJob));
}

void PSStreamPrintJob::init$($PSStreamPrintService* service) {
	this->printing = false;
	this->printReturned = false;
	$set(this, reqAttrSet, nullptr);
	$set(this, jobAttrSet, nullptr);
	$set(this, instream, nullptr);
	$set(this, reader, nullptr);
	$set(this, jobName, "Java Printing"_s);
	this->copies = 1;
	$init($MediaSize$NA);
	$set(this, mediaSize, $MediaSize$NA::LETTER);
	$init($OrientationRequested);
	$set(this, orient, $OrientationRequested::PORTRAIT);
	$set(this, service, service);
}

$PrintService* PSStreamPrintJob::getPrintService() {
	return this->service;
}

$PrintJobAttributeSet* PSStreamPrintJob::getAttributes() {
	$synchronized(this) {
		if (this->jobAttrSet == nullptr) {
			$var($PrintJobAttributeSet, jobSet, $new($HashPrintJobAttributeSet));
			return $AttributeSetUtilities::unmodifiableView(jobSet);
		} else {
			return this->jobAttrSet;
		}
	}
}

void PSStreamPrintJob::addPrintJobListener($PrintJobListener* listener) {
	$synchronized(this) {
		if (listener == nullptr) {
			return;
		}
		if (this->jobListeners == nullptr) {
			$set(this, jobListeners, $new($Vector));
		}
		$nc(this->jobListeners)->add(listener);
	}
}

void PSStreamPrintJob::removePrintJobListener($PrintJobListener* listener) {
	$synchronized(this) {
		if (listener == nullptr || this->jobListeners == nullptr) {
			return;
		}
		$nc(this->jobListeners)->remove($of(listener));
		if ($nc(this->jobListeners)->isEmpty()) {
			$set(this, jobListeners, nullptr);
		}
	}
}

void PSStreamPrintJob::closeDataStreams() {
	if (this->doc == nullptr) {
		return;
	}
	$var($Object, data, nullptr);
	try {
		$assign(data, $nc(this->doc)->getPrintData());
	} catch ($IOException&) {
		$var($IOException, e, $catch());
		return;
	}
	if (this->instream != nullptr) {
		{
			$var($Throwable, var$0, nullptr);
			try {
				try {
					$nc(this->instream)->close();
				} catch ($IOException&) {
					$catch();
				}
			} catch ($Throwable&) {
				$assign(var$0, $catch());
			} /*finally*/ {
				$set(this, instream, nullptr);
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	} else if (this->reader != nullptr) {
		{
			$var($Throwable, var$1, nullptr);
			try {
				try {
					$nc(this->reader)->close();
				} catch ($IOException&) {
					$catch();
				}
			} catch ($Throwable&) {
				$assign(var$1, $catch());
			} /*finally*/ {
				$set(this, reader, nullptr);
			}
			if (var$1 != nullptr) {
				$throw(var$1);
			}
		}
	} else if ($instanceOf($InputStream, data)) {
		try {
			$nc(($cast($InputStream, data)))->close();
		} catch ($IOException&) {
			$catch();
		}
	} else if ($instanceOf($Reader, data)) {
		try {
			$nc(($cast($Reader, data)))->close();
		} catch ($IOException&) {
			$catch();
		}
	}
}

void PSStreamPrintJob::notifyEvent(int32_t reason) {
	$synchronized(this) {
		if (this->jobListeners != nullptr) {
			$var($PrintJobListener, listener, nullptr);
			$var($PrintJobEvent, event, $new($PrintJobEvent, this, reason));
			for (int32_t i = 0; i < $nc(this->jobListeners)->size(); ++i) {
				$assign(listener, $cast($PrintJobListener, $nc(this->jobListeners)->elementAt(i)));
				switch (reason) {
				case $PrintJobEvent::JOB_CANCELED:
					{
						$nc(listener)->printJobCanceled(event);
						break;
					}
				case $PrintJobEvent::JOB_FAILED:
					{
						$nc(listener)->printJobFailed(event);
						break;
					}
				case $PrintJobEvent::DATA_TRANSFER_COMPLETE:
					{
						$nc(listener)->printDataTransferCompleted(event);
						break;
					}
				case $PrintJobEvent::NO_MORE_EVENTS:
					{
						$nc(listener)->printJobNoMoreEvents(event);
						break;
					}
				case $PrintJobEvent::JOB_COMPLETE:
					{
						$nc(listener)->printJobCompleted(event);
						break;
					}
				default:
					{
						break;
					}
				}
			}
		}
	}
}

void PSStreamPrintJob::addPrintJobAttributeListener($PrintJobAttributeListener* listener, $PrintJobAttributeSet* attributes$renamed) {
	$var($PrintJobAttributeSet, attributes, attributes$renamed);
	$synchronized(this) {
		if (listener == nullptr) {
			return;
		}
		if (this->attrListeners == nullptr) {
			$set(this, attrListeners, $new($Vector));
			$set(this, listenedAttributeSets, $new($Vector));
		}
		$nc(this->attrListeners)->add(listener);
		if (attributes == nullptr) {
			$assign(attributes, $new($HashPrintJobAttributeSet));
		}
		$nc(this->listenedAttributeSets)->add(attributes);
	}
}

void PSStreamPrintJob::removePrintJobAttributeListener($PrintJobAttributeListener* listener) {
	$synchronized(this) {
		if (listener == nullptr || this->attrListeners == nullptr) {
			return;
		}
		int32_t index = $nc(this->attrListeners)->indexOf(listener);
		if (index == -1) {
			return;
		} else {
			$nc(this->attrListeners)->remove(index);
			$nc(this->listenedAttributeSets)->remove(index);
			if ($nc(this->attrListeners)->isEmpty()) {
				$set(this, attrListeners, nullptr);
				$set(this, listenedAttributeSets, nullptr);
			}
		}
	}
}

void PSStreamPrintJob::print($Doc* doc, $PrintRequestAttributeSet* attributes) {
	$synchronized(this) {
		if (this->printing) {
			$throwNew($PrintException, "already printing"_s);
		} else {
			this->printing = true;
		}
	}
	$set(this, doc, doc);
	$var($DocFlavor, flavor, $nc(doc)->getDocFlavor());
	$var($Object, data, nullptr);
	try {
		$assign(data, doc->getPrintData());
	} catch ($IOException&) {
		$var($IOException, e, $catch());
		notifyEvent($PrintJobEvent::JOB_FAILED);
		$throwNew($PrintException, $$str({"can\'t get print data: "_s, $(e->toString())}));
	}
	if (flavor == nullptr || (!$nc(this->service)->isDocFlavorSupported(flavor))) {
		notifyEvent($PrintJobEvent::JOB_FAILED);
		$throwNew($PrintJobFlavorException, "invalid flavor"_s, flavor);
	}
	initializeAttributeSets(doc, attributes);
	getAttributeValues(flavor);
	$var($String, repClassName, $nc(flavor)->getRepresentationClassName());
	$init($DocFlavor$INPUT_STREAM);
	bool var$4 = flavor->equals($DocFlavor$INPUT_STREAM::GIF);
	bool var$3 = var$4 || flavor->equals($DocFlavor$INPUT_STREAM::JPEG);
	bool var$2 = var$3 || flavor->equals($DocFlavor$INPUT_STREAM::PNG);
	$init($DocFlavor$BYTE_ARRAY);
	bool var$1 = var$2 || flavor->equals($DocFlavor$BYTE_ARRAY::GIF);
	bool var$0 = var$1 || flavor->equals($DocFlavor$BYTE_ARRAY::JPEG);
	if (var$0 || flavor->equals($DocFlavor$BYTE_ARRAY::PNG)) {
		try {
			$set(this, instream, doc->getStreamForBytes());
			printableJob($$new($ImagePrinter, this->instream), this->reqAttrSet);
			return;
		} catch ($ClassCastException&) {
			$var($ClassCastException, cce, $catch());
			notifyEvent($PrintJobEvent::JOB_FAILED);
			$throwNew($PrintException, static_cast<$Exception*>(cce));
		} catch ($IOException&) {
			$var($IOException, ioe, $catch());
			notifyEvent($PrintJobEvent::JOB_FAILED);
			$throwNew($PrintException, static_cast<$Exception*>(ioe));
		}
	} else {
		$init($DocFlavor$URL);
		bool var$8 = flavor->equals($DocFlavor$URL::GIF);
		bool var$7 = var$8 || flavor->equals($DocFlavor$URL::JPEG);
		if (var$7 || flavor->equals($DocFlavor$URL::PNG)) {
			try {
				printableJob($$new($ImagePrinter, $cast($URL, data)), this->reqAttrSet);
				return;
			} catch ($ClassCastException&) {
				$var($ClassCastException, cce, $catch());
				notifyEvent($PrintJobEvent::JOB_FAILED);
				$throwNew($PrintException, static_cast<$Exception*>(cce));
			}
		} else if (repClassName->equals("java.awt.print.Pageable"_s)) {
			try {
				pageableJob($cast($Pageable, $(doc->getPrintData())), this->reqAttrSet);
				return;
			} catch ($ClassCastException&) {
				$var($ClassCastException, cce, $catch());
				notifyEvent($PrintJobEvent::JOB_FAILED);
				$throwNew($PrintException, static_cast<$Exception*>(cce));
			} catch ($IOException&) {
				$var($IOException, ioe, $catch());
				notifyEvent($PrintJobEvent::JOB_FAILED);
				$throwNew($PrintException, static_cast<$Exception*>(ioe));
			}
		} else if (repClassName->equals("java.awt.print.Printable"_s)) {
			try {
				printableJob($cast($Printable, $(doc->getPrintData())), this->reqAttrSet);
				return;
			} catch ($ClassCastException&) {
				$var($ClassCastException, cce, $catch());
				notifyEvent($PrintJobEvent::JOB_FAILED);
				$throwNew($PrintException, static_cast<$Exception*>(cce));
			} catch ($IOException&) {
				$var($IOException, ioe, $catch());
				notifyEvent($PrintJobEvent::JOB_FAILED);
				$throwNew($PrintException, static_cast<$Exception*>(ioe));
			}
		} else {
			notifyEvent($PrintJobEvent::JOB_FAILED);
			$throwNew($PrintException, $$str({"unrecognized class: "_s, repClassName}));
		}
	}
}

void PSStreamPrintJob::printableJob($Printable* printable, $PrintRequestAttributeSet* attributes) {
	{
		$var($Throwable, var$0, nullptr);
		bool return$1 = false;
		try {
			try {
				$synchronized(this) {
					if (this->job != nullptr) {
						$throwNew($PrintException, "already printing"_s);
					} else {
						$set(this, job, $new($PSPrinterJob));
					}
				}
				$nc(this->job)->setPrintService($(getPrintService()));
				$var($PageFormat, pf, $new($PageFormat));
				if (this->mediaSize != nullptr) {
					$var($Paper, p, $new($Paper));
					double var$2 = $nc(this->mediaSize)->getX($MediaSize::INCH) * 72.0;
					p->setSize(var$2, $nc(this->mediaSize)->getY($MediaSize::INCH) * 72.0);
					double var$3 = p->getWidth() - 144.0;
					p->setImageableArea(72.0, 72.0, var$3, p->getHeight() - 144.0);
					pf->setPaper(p);
				}
				$init($OrientationRequested);
				if (this->orient == $OrientationRequested::REVERSE_LANDSCAPE) {
					pf->setOrientation($PageFormat::REVERSE_LANDSCAPE);
				} else {
					if (this->orient == $OrientationRequested::LANDSCAPE) {
						pf->setOrientation($PageFormat::LANDSCAPE);
					}
				}
				$nc(this->job)->setPrintable(printable, pf);
				$nc(this->job)->print(attributes);
				notifyEvent($PrintJobEvent::JOB_COMPLETE);
				return$1 = true;
				goto $finally;
			} catch ($PrinterException&) {
				$var($PrinterException, pe, $catch());
				notifyEvent($PrintJobEvent::JOB_FAILED);
				$throwNew($PrintException, static_cast<$Exception*>(pe));
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} $finally: {
			this->printReturned = true;
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return;
		}
	}
}

void PSStreamPrintJob::pageableJob($Pageable* pageable, $PrintRequestAttributeSet* attributes) {
	{
		$var($Throwable, var$0, nullptr);
		bool return$1 = false;
		try {
			try {
				$synchronized(this) {
					if (this->job != nullptr) {
						$throwNew($PrintException, "already printing"_s);
					} else {
						$set(this, job, $new($PSPrinterJob));
					}
				}
				$nc(this->job)->setPrintService($(getPrintService()));
				$nc(this->job)->setPageable(pageable);
				$nc(this->job)->print(attributes);
				notifyEvent($PrintJobEvent::JOB_COMPLETE);
				return$1 = true;
				goto $finally;
			} catch ($PrinterException&) {
				$var($PrinterException, pe, $catch());
				notifyEvent($PrintJobEvent::JOB_FAILED);
				$throwNew($PrintException, static_cast<$Exception*>(pe));
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} $finally: {
			this->printReturned = true;
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return;
		}
	}
}

void PSStreamPrintJob::initializeAttributeSets($Doc* doc, $PrintRequestAttributeSet* reqSet) {
	$synchronized(this) {
		$set(this, reqAttrSet, $new($HashPrintRequestAttributeSet));
		$set(this, jobAttrSet, $new($HashPrintJobAttributeSet));
		$var($AttributeArray, attrs, nullptr);
		if (reqSet != nullptr) {
			$nc(this->reqAttrSet)->addAll(reqSet);
			$assign(attrs, reqSet->toArray());
			for (int32_t i = 0; i < $nc(attrs)->length; ++i) {
				if ($instanceOf($PrintJobAttribute, attrs->get(i))) {
					$nc(this->jobAttrSet)->add(attrs->get(i));
				}
			}
		}
		$var($DocAttributeSet, docSet, $nc(doc)->getAttributes());
		if (docSet != nullptr) {
			$assign(attrs, docSet->toArray());
			for (int32_t i = 0; i < $nc(attrs)->length; ++i) {
				if ($instanceOf($PrintRequestAttribute, attrs->get(i))) {
					$nc(this->reqAttrSet)->add(attrs->get(i));
				}
				if ($instanceOf($PrintJobAttribute, attrs->get(i))) {
					$nc(this->jobAttrSet)->add(attrs->get(i));
				}
			}
		}
		$var($String, userName, ""_s);
		try {
			$assign(userName, $System::getProperty("user.name"_s));
		} catch ($SecurityException&) {
			$catch();
		}
		if (userName == nullptr || userName->isEmpty()) {
			$load($RequestingUserName);
			$var($RequestingUserName, ruName, $cast($RequestingUserName, $nc(reqSet)->get($RequestingUserName::class$)));
			if (ruName != nullptr) {
				$var($String, var$0, ruName->getValue());
				$nc(this->jobAttrSet)->add($$new($JobOriginatingUserName, var$0, $(ruName->getLocale())));
			} else {
				$nc(this->jobAttrSet)->add($$new($JobOriginatingUserName, ""_s, nullptr));
			}
		} else {
			$nc(this->jobAttrSet)->add($$new($JobOriginatingUserName, userName, nullptr));
		}
		$load($JobName);
		if ($nc(this->jobAttrSet)->get($JobName::class$) == nullptr) {
			$var($JobName, jobName, nullptr);
			$load($DocumentName);
			if (docSet != nullptr && docSet->get($DocumentName::class$) != nullptr) {
				$var($DocumentName, docName, $cast($DocumentName, docSet->get($DocumentName::class$)));
				$var($String, var$1, $nc(docName)->getValue());
				$assign(jobName, $new($JobName, var$1, $(docName->getLocale())));
				$nc(this->jobAttrSet)->add(static_cast<$Attribute*>(static_cast<$PrintRequestAttribute*>(jobName)));
			} else {
				$var($String, str, $str({"JPS Job:"_s, doc}));
				try {
					$var($Object, printData, doc->getPrintData());
					if ($instanceOf($URL, printData)) {
						$assign(str, $nc((($cast($URL, $(doc->getPrintData())))))->toString());
					}
				} catch ($IOException&) {
					$catch();
				}
				$assign(jobName, $new($JobName, str, nullptr));
				$nc(this->jobAttrSet)->add(static_cast<$Attribute*>(static_cast<$PrintRequestAttribute*>(jobName)));
			}
		}
		$set(this, jobAttrSet, $AttributeSetUtilities::unmodifiableView(this->jobAttrSet));
	}
}

void PSStreamPrintJob::getAttributeValues($DocFlavor* flavor) {
	$var($Attribute, attr, nullptr);
	$Class* category = nullptr;
	$load($Fidelity);
	$init($Fidelity);
	if ($equals($nc(this->reqAttrSet)->get($Fidelity::class$), $Fidelity::FIDELITY_TRUE)) {
		this->fidelity = true;
	} else {
		this->fidelity = false;
	}
	$var($AttributeArray, attrs, $nc(this->reqAttrSet)->toArray());
	for (int32_t i = 0; i < $nc(attrs)->length; ++i) {
		$assign(attr, attrs->get(i));
		category = $nc(attr)->getCategory();
		if (this->fidelity == true) {
			if (!$nc(this->service)->isAttributeCategorySupported(category)) {
				notifyEvent($PrintJobEvent::JOB_FAILED);
				$throwNew($PrintJobAttributeException, $$str({"unsupported category: "_s, category}), category, nullptr);
			} else if (!$nc(this->service)->isAttributeValueSupported(attr, flavor, nullptr)) {
				notifyEvent($PrintJobEvent::JOB_FAILED);
				$throwNew($PrintJobAttributeException, $$str({"unsupported attribute: "_s, attr}), nullptr, attr);
			}
		}
		$load($JobName);
		if (category == $JobName::class$) {
			$set(this, jobName, $nc(($cast($JobName, attr)))->getValue());
		} else {
			$load($Copies);
			if (category == $Copies::class$) {
				this->copies = $nc(($cast($Copies, attr)))->getValue();
			} else {
				$load($Media);
				if (category == $Media::class$) {
					if ($instanceOf($MediaSizeName, attr) && $nc(this->service)->isAttributeValueSupported(attr, nullptr, nullptr)) {
						$set(this, mediaSize, $MediaSize::getMediaSizeForName($cast($MediaSizeName, attr)));
					}
				} else {
					$load($OrientationRequested);
					if (category == $OrientationRequested::class$) {
						$set(this, orient, $cast($OrientationRequested, attr));
					}
				}
			}
		}
	}
}

void PSStreamPrintJob::cancel() {
	$synchronized(this) {
		if (!this->printing) {
			$throwNew($PrintException, "Job is not yet submitted."_s);
		} else if (this->job != nullptr && !this->printReturned) {
			$nc(this->job)->cancel();
			notifyEvent($PrintJobEvent::JOB_CANCELED);
			return;
		} else {
			$throwNew($PrintException, "Job could not be cancelled."_s);
		}
	}
}

PSStreamPrintJob::PSStreamPrintJob() {
}

$Class* PSStreamPrintJob::load$($String* name, bool initialize) {
	$loadClass(PSStreamPrintJob, name, initialize, &_PSStreamPrintJob_ClassInfo_, allocate$PSStreamPrintJob);
	return class$;
}

$Class* PSStreamPrintJob::class$ = nullptr;

	} // print
} // sun
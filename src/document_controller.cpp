#include "document_controller.h"

DocumentController::DocumentController() : document() {
}

DocumentController::~DocumentController() {
}

void DocumentController::openDocument(const std::string& filePath) {
    // Implementation for opening a document from file
    // For now, this is a placeholder
    std::string content = " ";
    document.setContent(content);
}

void DocumentController::saveDocument(const std::string& filePath) {
    // Implementation for saving the document to file
    // For now, this is a placeholder
}

void DocumentController::closeDocument() {
    document.clear();
}

std::string DocumentController::getDocumentContent() const {
    return document.getContent();
}
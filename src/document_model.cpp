#include "document_model.h"

Document::Document() : content(""), unsavedChanges(false) {}
Document::~Document() {}

bool Document::hasUnsavedChanges() const {
    return unsavedChanges;
}

std::string Document::getContent() const {
    return content;
}

void Document::setContent(const std::string& newContent) {
    content = newContent;
    unsavedChanges = true;
}

void Document::clear() {
    content.clear();
    unsavedChanges = true;
}

void Document::insertCharAt(size_t position, char c) {
    if (position <= content.size()) {
        content.insert(content.begin() + position, c);
        unsavedChanges = true;
    }
}

void Document::deleteCharAt(size_t position) {
    if (position < content.size()) {
        content.erase(content.begin() + position);
        unsavedChanges = true;
    }
}


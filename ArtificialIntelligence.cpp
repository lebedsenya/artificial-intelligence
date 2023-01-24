#include <caffe/caffe.hpp>

int main() {
    // Load trained model
    caffe::Net<float> net("path/to/trained/model.prototxt", caffe::TEST);
    net.CopyTrainedLayersFrom("path/to/trained/weights.caffemodel");
    // Prepare input data
    // ...
    // Forward pass
    net.Forward();
    // Get output
    // ...
    return 0;
}


#include <iostream>

int main() {
    std::string input;
    std::cout << "What is your question?\n";
    std::getline(std::cin, input);

    // Define rules
    if (input == "What is the weather like today?") {
        std::cout << "I'm sorry, I don't know the answer.\n";
    } else if (input == "What is the time?") {
        std::cout << "I'm sorry, I don't know the answer.\n";
    } else {
        std::cout << "I'm sorry, I don't understand.\n";
    }
    return 0;
}

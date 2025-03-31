
namespace HelloQuantum {
    open Microsoft.Quantum.Canon;
    open Microsoft.Quantum.Intrinsic;

    operation SayHello() : Unit {
        Message("Hello, Quantum World!");
    }
}

operation PrintHelloNTimes(n : Int) : Unit {
    for (i in 1..n) {
        Message("Hello, Quantum!");
    }
}

operation MeasureQubit() : Result {
    using (q = Qubit()) {  // Alloue un qubit
        let result = M(q); // Mesure le qubit
        return result;
    }
}

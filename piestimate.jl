let
MAX_ITER = 1_500_000_000 
hit = 0

println("Estimating the value for pi with Monte Carlo integration.\n")
@time for i ∈ 1:MAX_ITER
    x = rand()
    y = rand()
    if x^2 + y^2 < 1
        hit += 1
    end
    if i % 20_000_000 == 0
        global estimate = 4*hit/i
        if i < 1_000_000_000
            println("Current estimate: $(round(estimate, digits=8)) after $(i/1_000_000) million iterations.")
        elseif i < MAX_ITER
            println("Current estimate: $(round(estimate, digits=8)) after $(i/1_000_000_000) billion iterations.")
        end
    end
end
println("\nFinal estimate: $estimate after $(i/1_000_000_000) billion iterations.")
end

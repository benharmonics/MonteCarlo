let
MAX_ITER = 1_500_000_000 
hit_count = 0
iter_count = 0

println("Estimating the value for pi with Monte Carlo integration.")
@time for i ∈ 1:MAX_ITER
    x = rand()
    y = rand()
    iter_count += 1
    if x^2 + y^2 < 1
        hit_count += 1
    end
    if iter_count % 20_000_000 == 0
        global estimate = 4*hit_count/iter_count
        if iter_count < 1_000_000_000
            println("Current estimate: $(round(estimate, digits=8)) after $(iter_count/1_000_000) million iterations.")
        elseif iter_count < MAX_ITER
            println("Current estimate: $(round(estimate, digits=8)) after $(iter_count/1_000_000_000) billion iterations.")
        end
    end
end
println("\nFinal estimate: $estimate after $(iter_count/1_000_000_000) billion iterations.")
end
